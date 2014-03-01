#include "button_controller.h"

namespace gui
{

namespace controller
{

ButtonController::ButtonController(HWND hWnd) :
	ControllerBase( hWnd )
{
}

ButtonController::~ButtonController()
{
}

std::shared_ptr<model::IModelElement> ButtonController::getModelElement() const
{
	return button_model;
}

void ButtonController::setButtonModel(const std::shared_ptr<model::ButtonModel>& button_model) 
{
	this->button_model = button_model;
}

std::shared_ptr<model::ButtonModel> ButtonController::getButtonModel() const 
{
	return button_model;
}

}

}

