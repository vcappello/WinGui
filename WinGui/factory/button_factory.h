#ifndef BUTTONFACTORY_H
#define BUTTONFACTORY_H

#include <memory>

#include <windows.h>

#include <controller/button_controller.h>
#include <model/button_model.h>
#include <controller/abstract_windowed_controller.h>
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
	ButtonFactory();

public:
	std::shared_ptr<gui::controller::ButtonController> create(std::shared_ptr<gui::model::ButtonModel> model,
		std::shared_ptr<gui::controller::AbstractWindowedController> container);
};

}

}

#endif // BUTTONFACTORY_H
