#include "button_factory.h"

#include <application.h>
#include <message_dispatcher.h>
#include <factory/font_factory.h>

namespace gui
{

namespace factory
{

ButtonFactory::ButtonFactory()
{
}

ButtonFactory::~ButtonFactory()
{
}

std::shared_ptr<gui::controller::ButtonController> ButtonFactory::create(std::shared_ptr<gui::model::ButtonModel> model,
	std::shared_ptr<gui::controller::AbstractWindowedController> container)
{
	int window_style = WS_CHILD | WS_TABSTOP; // BS_DEFPUSHBUTTON

	if (model->isVisible())
		window_style |= WS_VISIBLE;

	int button_id = IdProvider::getInstance()->generateId();

	HWND hWnd = CreateWindowEx (0,
	                            "BUTTON",
	                            model->getText().c_str(),
	                            window_style,
	                            model->getLocation()->getX(),
	                            model->getLocation()->getY(),
	                            model->getSize()->getWidth(),
	                            model->getSize()->getHeight(),
	                            container->getHWnd(),
	                            (HMENU)button_id,
	                            Application::getInstance()->getHInstance(),
	                            0);

	if (!hWnd)
		throw SystemError( SystemError::getLastErrorMessage() );

	std::shared_ptr<controller::ButtonController> controller =
	    std::make_shared<controller::ButtonController>( hWnd, button_id );

	controller->setButtonModel (model);
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
