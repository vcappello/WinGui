#ifndef BUTTONFACTORY_H
#define BUTTONFACTORY_H

#include <memory>

#include <windows.h>

#include <controller/button_controller.h>
#include <model/button_model.h>
#include <controller/controller_base.h>
#include <id_provider.h>
#include <system_error.h>

namespace gui
{

namespace factory
{

class ButtonFactory
{
public:
	~ButtonFactory();

	static std::shared_ptr<ButtonFactory> getInstance();

protected:
	ButtonFactory();

public:
	std::shared_ptr<gui::controller::ButtonController> create(std::shared_ptr<gui::controller::ControllerBase> container,
	        std::shared_ptr<gui::model::ButtonModel> model);
};

}

}

#endif // BUTTONFACTORY_H
