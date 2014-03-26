#include "edit_controller.h"

#include <factory/font_factory.h>

namespace gui
{

namespace controller
{

EditController::EditController(HWND hWnd, int command_id) :
	AbstractWindowedController( hWnd ),
	command_id( command_id ),
	change_event( new Event<>() )
{
}

EditController::~EditController()
{
}

std::shared_ptr<model::IModelElement> EditController::getModelElement() const
{
	return edit_model;
}

int EditController::getCommandId() const
{
	return command_id;
}

void EditController::setEditModel(const std::shared_ptr<model::EditModel>& value) 
{
	// TODO: unregister from previous model (if exist)
	edit_model = value;
	
	font_model_changed_connection = edit_model->getFontModelChangedEvent()->registerHandler([&]{
			gui::factory::FontFactory font_factory;
			std::shared_ptr<gui::handler::FontHandler> font_handler = font_factory.create (edit_model->getFontModel());
			setFontHandler (font_handler);
		});
		
	text_changed_connection = edit_model->getTextChangedEvent()->registerHandler([&]{
			setText(edit_model->getText());
		});
		
	processPlaceableModel (value);
	
}

std::shared_ptr<model::EditModel> EditController::getEditModel() const 
{
	return edit_model;
}

std::string EditController::getText()
{
	int text_length = SendMessage(h_wnd, WM_GETTEXTLENGTH, 0, 0);
    char* buffer_ptr = new char[text_length + 1];
	
    SendMessage(h_wnd, WM_GETTEXT, (WPARAM)text_length + 1, (LPARAM)buffer_ptr);
	std::string text = buffer_ptr;
	free (buffer_ptr);
	
    return text;
}

void EditController::setText(const std::string& value)
{
    SendMessage(h_wnd, WM_SETTEXT, 0, (LPARAM)value.c_str());
}

void EditController::fireCommandEvent(WPARAM wParam, LPARAM lParam)
{
	switch (HIWORD(wParam))
	{
		case EN_CHANGE:
		{
			text_changed_connection->setEnabled (false);			
			edit_model->setText (getText());
			text_changed_connection->setEnabled (true);
			
			change_event->fire();
			break;
		}
	}
}

}

}

