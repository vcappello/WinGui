#include "button_factory.h"

#include <application.h>

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

std::shared_ptr<ButtonFactory> ButtonFactory::getInstance()
{
	static std::shared_ptr<ButtonFactory> instance;

	if (!instance)
		instance = std::shared_ptr<ButtonFactory>( new ButtonFactory() );

	return instance;
}

std::shared_ptr<gui::controller::ButtonController> ButtonFactory::create(std::shared_ptr<gui::controller::ControllerBase> container,
        std::shared_ptr<gui::model::ButtonModel> model)
{
	int window_style = WS_CHILD | WS_TABSTOP; // BS_DEFPUSHBUTTON

	if (model->isVisible())
		window_style |= WS_VISIBLE;

	int button_id = IdProvider::getInstance()->generateId();

	HWND hWnd = CreateWindowEx (0,
	                            "BUTTON",
	                            model->getText().c_str(),
	                            window_style,
	                            model->getLeft(),
	                            model->getTop(),
	                            model->getWidth(),
	                            model->getHeight(),
	                            container->getHWnd(),
	                            (HMENU)button_id,
	                            Application::getInstance()->getHInstance(),
	                            0);

	if (!hWnd)
		throw SystemError( SystemError::getLastErrorMessage() );

	std::shared_ptr<controller::ButtonController> controller =
	    std::make_shared<controller::ButtonController>( hWnd );

	return controller;
}

}

}
