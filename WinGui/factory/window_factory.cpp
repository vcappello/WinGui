#include "window_factory.h"

#include <application.h>
#include <message_dispatcher.h>

#include <controller/button_controller.h>
#include <model/button_model.h>
#include <factory/button_factory.h>

#include <controller/edit_controller.h>
#include <model/edit_model.h>
#include <factory/edit_factory.h>

#include <factory/font_factory.h>

namespace gui
{

namespace factory
{

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	return MessageDispatcher::getInstance()->dispatchMessage (hWnd, message, wParam, lParam);
}

WindowFactory::WindowFactory()
{
}

WindowFactory::~WindowFactory()
{
}

std::shared_ptr<WindowFactory> WindowFactory::getInstance()
{
	static std::shared_ptr<WindowFactory> instance;

	if (!instance)
		instance = std::shared_ptr<WindowFactory>( new WindowFactory() );

	return instance;	
}

std::shared_ptr<gui::controller::WindowController> WindowFactory::create(std::shared_ptr<gui::model::WindowModel> model, std::shared_ptr<gui::controller::AbstractWindowedController> container)
{
	std::shared_ptr<controller::WindowController> window_controller = createWindow (model);
	
	for (auto child = model->begin(); child != model->end(); child++)
	{
		model::IModelElement* child_ptr = child->get();
		if (typeid(*child_ptr) == typeid(model::ButtonModel))
		{
			std::unique_ptr<factory::ButtonFactory> button_factory( new ButtonFactory );
			std::shared_ptr<controller::ButtonController> button_controller = 
				button_factory->create (std::dynamic_pointer_cast<model::ButtonModel>(*child), window_controller);
				
			window_controller->add (button_controller);
		}
		else if (typeid(*child_ptr) == typeid(model::EditModel))
		{
			std::unique_ptr<factory::EditFactory> edit_factory( new EditFactory );
			std::shared_ptr<controller::EditController> edit_controller = 
				edit_factory->create (std::dynamic_pointer_cast<model::EditModel>(*child), window_controller);
				
			window_controller->add (edit_controller);
		}
		else if (typeid(*child_ptr) == typeid(model::WindowModel))
		{
			std::shared_ptr<controller::WindowController> child_window_controller = 
				create (std::dynamic_pointer_cast<model::WindowModel>(*child), window_controller);
				
			window_controller->add (child_window_controller);
		}
	}
	
	return window_controller;
}

std::shared_ptr<gui::controller::WindowController> WindowFactory::createWindow(std::shared_ptr<gui::model::WindowModel> model, std::shared_ptr<gui::controller::AbstractWindowedController> container)
{
	WNDCLASSEX wcex;

	wcex.cbSize 			= sizeof(WNDCLASSEX);
	wcex.lpfnWndProc    	= WndProc;
	wcex.cbClsExtra     	= 0;
	wcex.cbWndExtra     	= 0;
	wcex.hInstance      	= Application::getInstance()->getHInstance();
	wcex.hIcon          	= LoadIcon (Application::getInstance()->getHInstance(), IDI_APPLICATION);
	wcex.hCursor        	= LoadCursor (NULL, IDC_ARROW);
	wcex.hbrBackground  	= (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName   	= NULL;
	wcex.lpszClassName  	= model->getName().c_str();
	wcex.hIconSm        	= LoadIcon (Application::getInstance()->getHInstance(), IDI_APPLICATION);
	wcex.style          	= CS_HREDRAW | CS_VREDRAW;

	if (!RegisterClassEx (&wcex)) {
		throw SystemError( SystemError::getLastErrorMessage() );
	}

	int window_style = WS_OVERLAPPEDWINDOW;
	
	if (model->isVisible())
		window_style |= WS_VISIBLE;
		
	HWND hWnd = CreateWindow (
	                model->getName().c_str(),
	                model->getCaption().c_str(),
	                window_style,
					model->getLocation()->getX(),
					model->getLocation()->getY(),
					model->getSize()->getWidth(),
					model->getSize()->getHeight(),
	                container ? container->getHWnd() : NULL,
	                NULL,
	                Application::getInstance()->getHInstance(),
	                NULL
	            );

	if (!hWnd)
		throw SystemError( SystemError::getLastErrorMessage() );

	std::shared_ptr<controller::WindowController> controller =
	    std::make_shared<controller::WindowController>( hWnd );

	controller->setWindowModel (model);
	controller->setName (model->getName());
	
	if (model->getFontModel())
	{
		gui::factory::FontFactory font_factory;
		std::shared_ptr<gui::handler::FontHandler> font_handler = font_factory.create (model->getFontModel());
		controller->setFontHandler (font_handler);
	}
	
	// Register controller on MessageDispatcher
	MessageDispatcher::getInstance()->registerController (controller);

	return controller;	
}

}

}

