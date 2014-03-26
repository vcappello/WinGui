#include "edit_factory.h"

#include <application.h>
#include <message_dispatcher.h>
#include <factory/font_factory.h>

namespace gui
{

namespace factory
{

EditFactory::EditFactory()
{
}

EditFactory::~EditFactory()
{
}

std::shared_ptr<gui::controller::EditController> EditFactory::create(std::shared_ptr<gui::model::EditModel> model,
	std::shared_ptr<gui::controller::AbstractWindowedController> container)
{
	int window_style = WS_CHILD | WS_TABSTOP;

	if (model->isVisible())
		window_style |= WS_VISIBLE;

	int edit_id = IdProvider::getInstance()->generateId();

	HWND hWnd = CreateWindowEx (WS_EX_CLIENTEDGE,
	                            "EDIT",
	                            model->getText().c_str(),
	                            window_style,
	                            model->getLocation()->getX(),
	                            model->getLocation()->getY(),
	                            model->getSize()->getWidth(),
	                            model->getSize()->getHeight(),
	                            container->getHWnd(),
	                            (HMENU)edit_id,
	                            Application::getInstance()->getHInstance(),
	                            0);

	if (!hWnd)
		throw SystemError( SystemError::getLastErrorMessage() );

	std::shared_ptr<controller::EditController> controller =
	    std::make_shared<controller::EditController>( hWnd, edit_id );

	controller->setEditModel (model);
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

