#include "edit_controller.h"

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
	edit_model = value;
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
			edit_model->setText (getText());
			
			change_event->fire();
			break;
		}
	}
}

}

}

