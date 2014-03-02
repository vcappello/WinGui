#include "window_builder.h"

namespace gui
{

WindowBuilder::WindowBuilder()
{
}

WindowBuilder::~WindowBuilder()
{
}

std::shared_ptr<WindowBuilder> WindowBuilder::getInstance()
{
	static std::shared_ptr<WindowBuilder> instance;

	if (!instance)
		instance = std::shared_ptr<WindowBuilder>( new WindowBuilder() );

	return instance;
}

std::shared_ptr<controller::WindowController> WindowBuilder::createWindow(std::shared_ptr<model::WindowModel> model)
{
	std::shared_ptr<controller::WindowController> window_controller = factory::WindowFactory::getInstance()->create (model);
	
	for (auto child = model->childrenBegin(); child != model->childrenEnd(); child++)
	{
		model::IModelElement* child_ptr = child->get();
		if (typeid(*child_ptr) == typeid(model::ButtonModel))
		{
			std::shared_ptr<controller::ButtonController> button_controller = 
				factory::ButtonFactory::getInstance()->create (window_controller, std::dynamic_pointer_cast<model::ButtonModel>(*child));
				
			window_controller->add ((*child)->getName(), button_controller);
		}
	}
	
	return window_controller;
}

}
