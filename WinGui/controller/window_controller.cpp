#include "window_controller.h"

#include <application.h>

namespace gui
{

namespace controller
{

WindowController::WindowController(HWND hWnd) :
	ControllerBase( hWnd )
{
}

WindowController::~WindowController()
{
}

std::shared_ptr<model::IModelElement> WindowController::getModelElement() const
{
	return window_model;
}

void WindowController::setWindowModel(const std::shared_ptr<model::WindowModel>& window_model) 
{
	this->window_model = window_model;
}

std::shared_ptr<model::WindowModel> WindowController::getWindowModel() const 
{
	return window_model;
}

void WindowController::showWindow()
{
	ShowWindow (h_wnd, Application::getInstance()->getNCmdShow());
}

}

}

