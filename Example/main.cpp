#include <memory>
#include <stdexcept>
#include <iostream>
#include <sstream>

#include <application.h>
#include <factory/window_factory.h>
#include <model/window_model.h>
#include <model/button_model.h>
#include <model/edit_model.h>
#include <model/font_model.h>
#include <controller/window_controller.h>
#include <controller/button_controller.h>
#include <controller/edit_controller.h>
#include <system_error.h>

int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow)
{
	gui::Application::getInstance()->startup(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
	
	std::shared_ptr<gui::model::FontModel> font_model = 
		std::make_shared<gui::model::FontModel>();
		
	std::shared_ptr<gui::model::FontModel> comic_font_model = 
		std::make_shared<gui::model::FontModel>();
	comic_font_model->setFamilyName("Comic Sans MS");
	
	std::shared_ptr<gui::model::WindowModel> window_model = 
		std::make_shared<gui::model::WindowModel>();
	
	window_model->setName ("Example");
	window_model->setCaption ("Example");
	window_model->getSize()->setWidth (300);
	window_model->getSize()->setHeight (200);
	window_model->setFontModel (font_model);
	
	std::shared_ptr<gui::model::EditModel> edit_model = 
		std::make_shared<gui::model::EditModel>();
		
	edit_model->setName ("Edit1");
	edit_model->setText ("Hello");
	edit_model->getLocation()->setX (10);
	edit_model->getLocation()->setY (50);
	edit_model->getSize()->setWidth (200);
	edit_model->getSize()->setHeight (30);
	edit_model->setVisible (true);
	edit_model->setFontModel (font_model);
	
	std::shared_ptr<gui::model::EditModel> edit2_model = 
		std::make_shared<gui::model::EditModel>();
		
	edit2_model->setName ("Edit2");
	edit2_model->setText ("Type some value");
	edit2_model->getLocation()->setX (10);
	edit2_model->getLocation()->setY (90);
	edit2_model->getSize()->setWidth (200);
	edit2_model->getSize()->setHeight (30);
	edit2_model->setVisible (true);
	edit2_model->setFontModel (font_model);
	
	std::shared_ptr<gui::model::ButtonModel> button_model = 
		std::make_shared<gui::model::ButtonModel>();
		
	button_model->setName ("Button1");
	button_model->setText ("Click Me");
	button_model->getLocation()->setX (10);
	button_model->getLocation()->setY (130);
	button_model->getSize()->setWidth (100);
	button_model->getSize()->setHeight (30);
	button_model->setVisible (true);
	button_model->setFontModel (font_model);
	
	window_model->add (edit_model);
	window_model->add (edit2_model);	
	window_model->add (button_model);
	
	int click_count = 0;
	
	try
	{
		std::shared_ptr<gui::controller::WindowController> window_controller = 
			gui::factory::WindowFactory::getInstance()->create (window_model);

		std::shared_ptr<gui::controller::ButtonController> button_controller = 
			std::dynamic_pointer_cast<gui::controller::ButtonController>(window_controller->get("Button1"));
		
		std::shared_ptr<gui::controller::EditController> edit_controller = 
			std::dynamic_pointer_cast<gui::controller::EditController>(window_controller->get("Edit1"));
		
		std::shared_ptr<gui::controller::EditController> edit2_controller = 
			std::dynamic_pointer_cast<gui::controller::EditController>(window_controller->get("Edit2"));
		
		window_controller->onDestroyEvent()->registerHandler ([](){ 
				gui::Application::getInstance()->quit();
			});
		
		window_controller->onPaintEvent()->registerHandler ([&](std::shared_ptr<gui::Graphics> g){
				std::stringstream ss;
				ss << "Click count: " << click_count;
				g->beginPaint();
				g->selectFont (window_controller->getFontHandler());
				g->drawText (5, 5, ss.str().c_str());
				g->endPaint();
			});

		button_controller->onClickEvent()->registerHandler ([&](){
				click_count++;
				edit_model->setText (edit2_model->getText());
				edit_model->setFontModel (comic_font_model);
				window_controller->repaint();
			});

		edit_controller->onChangeEvent()->registerHandler ([&](){
				std::cout << "change: " << edit_controller->getText() << std::endl;
			});
			
		window_controller->showWindow();
		window_controller->update();
		
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
