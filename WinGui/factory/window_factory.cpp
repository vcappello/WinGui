#include "window_factory.h"

#include <application.h>
#include <message_dispatcher.h>

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

std::shared_ptr<gui::controller::WindowController> WindowFactory::create(std::shared_ptr<gui::model::WindowModel> model)
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
	                CW_USEDEFAULT, CW_USEDEFAULT,
	                model->getWidth(), model->getHeight(),
	                NULL,
	                NULL,
	                Application::getInstance()->getHInstance(),
	                NULL
	            );

	if (!hWnd)
		throw SystemError( SystemError::getLastErrorMessage() );

	std::shared_ptr<controller::WindowController> controller =
	    std::make_shared<controller::WindowController>( hWnd );

	// Register controller on MessageDispatcher
	MessageDispatcher::getInstance()->registerController (controller);

	return controller;
}

}

}

