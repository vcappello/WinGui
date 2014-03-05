#include <stdexcept>
#include <iostream>
#include <sstream>

#include <application.h>
#include <window_builder.h>
#include <model/window_model.h>
#include <model/button_model.h>
#include <controller/window_controller.h>
#include <controller/button_controller.h>
#include <system_error.h>

int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow)
{
	gui::Application::getInstance()->startup(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
	
	std::shared_ptr<gui::model::WindowModel> window_model = 
		std::make_shared<gui::model::WindowModel>();
	
	window_model->setName ("Example");
	window_model->setCaption ("Example");
	window_model->setWidth (300);
	window_model->setHeight (200);
	
	std::shared_ptr<gui::model::ButtonModel> button_model = 
		std::make_shared<gui::model::ButtonModel>();
		
	button_model->setName ("Button1");
	button_model->setText ("Click Me");
	button_model->setLeft (30);
	button_model->setTop (50);
	button_model->setWidth (100);
	button_model->setHeight (30);
	button_model->setVisible (true);
	window_model->add (button_model);
	
	int click_count = 0;
	
	try
	{
		std::shared_ptr<gui::controller::WindowController> controller = 
			gui::WindowBuilder::getInstance()->createWindow (window_model);
		
		controller->onDestroyEvent()->registerHandler ([](){ 
				gui::Application::getInstance()->quit();
			});
		
		controller->onPaintEvent()->registerHandler ([&](std::shared_ptr<gui::Graphics> g){
				std::stringstream ss;
				ss << "Click count: " << click_count;
				g->beginPaint();
				g->drawText (5, 5, ss.str().c_str());
				g->endPaint();
			});

		std::shared_ptr<gui::controller::ButtonController> button_controller = 
			std::dynamic_pointer_cast<gui::controller::ButtonController>(controller->get("Button1"));

		button_controller->onClickEvent()->registerHandler ([&](){
				click_count++;
				controller->repaint();
			});

		controller->showWindow();
		controller->update();
		
		gui::Application::getInstance()->run();
	}
	catch (std::runtime_error& r)
	{
		std::cerr << "Runtime error: " << r.what() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	return 0;
}
