#ifndef EDITFACTORY_H
#define EDITFACTORY_H

#include <memory>

#include <windows.h>

#include <controller/edit_controller.h>
#include <model/edit_model.h>
#include <controller/abstract_windowed_controller.h>
#include <id_provider.h>
#include <system_error.h>

namespace gui
{

namespace factory
{

class EditFactory
{
public:
	EditFactory();
	~EditFactory();

public:
	std::shared_ptr<gui::controller::EditController> create(std::shared_ptr<gui::model::EditModel> model,
		std::shared_ptr<gui::controller::AbstractWindowedController> container);
};

}

}

#endif // EDITFACTORY_H
