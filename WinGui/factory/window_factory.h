#ifndef WINDOWFACTORY_H
#define WINDOWFACTORY_H

#include <memory>

#include <windows.h>

#include <controller/window_controller.h>
#include <model/window_model.h>
#include <system_error.h>

namespace gui
{

namespace factory
{

class WindowFactory
{
public:
	~WindowFactory();

	static std::shared_ptr<WindowFactory> getInstance();

protected:
	WindowFactory();
	
public:
	std::shared_ptr<gui::controller::WindowController> create(std::shared_ptr<gui::model::WindowModel> model, std::shared_ptr<gui::controller::AbstractWindowedController> container = nullptr);
	
protected:
	std::shared_ptr<gui::controller::WindowController> createWindow(std::shared_ptr<gui::model::WindowModel> model, std::shared_ptr<gui::controller::AbstractWindowedController> container = nullptr);	
};

}

}

#endif // WINDOWFACTORY_H
