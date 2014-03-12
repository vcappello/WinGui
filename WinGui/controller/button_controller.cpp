#include "button_controller.h"

namespace gui
{

namespace controller
{

ButtonController::ButtonController(HWND hWnd, int command_id) :
	AbstractWindowedController( hWnd ),
	command_id( command_id ),
	click_event( new Event<>() )
{
}

ButtonController::~ButtonController()
{
}

std::shared_ptr<model::IModelElement> ButtonController::getModelElement() const
{
	return button_model;
}

int ButtonController::getCommandId() const
{
	return command_id;
}

void ButtonController::setButtonModel(const std::shared_ptr<model::ButtonModel>& value) 
{
	button_model = value;
}

std::shared_ptr<model::ButtonModel> ButtonController::getButtonModel() const 
{
	return button_model;
}

void ButtonController::fireCommandEvent(WPARAM wParam, LPARAM lParam)
{
	click_event->fire();
}

}

}


