#ifndef WINDOWBUILDER_H
#define WINDOWBUILDER_H

#include <memory>
#include <stdexcept>

#include <windows.h>

#include <factory/window_factory.h>
#include <factory/button_factory.h>
#include <system_error.h>

namespace gui
{

class WindowBuilder
{
public:
	~WindowBuilder();

	static std::shared_ptr<WindowBuilder> getInstance();
	
protected:
	WindowBuilder();

public:
	std::shared_ptr<controller::WindowController> createWindow(std::shared_ptr<model::WindowModel> model);
};

}

#endif // WINDOWBUILDER_H
