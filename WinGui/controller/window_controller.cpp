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

void WindowController::add(const std::string& name, std::shared_ptr<ControllerBase> item)
{
	if (children.find (name) != children.end())
		throw Error("Error on WindowController::add An item with this name already exist");
		
	children.insert (std::make_pair(name, item));
}

void WindowController::erase(const std::string& name)
{
	if (children.find (name) == children.end())
		throw Error("Error on WindowController::erase An item with this name does not exist");
	
	children.erase (name);
}

std::shared_ptr<ControllerBase> WindowController::get(const std::string& name)
{
	if (children.find (name) == children.end())
		throw Error("Error on WindowController::get An item with this name does not exist");
		
	return children[name];
}

}

}


