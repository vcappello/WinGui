#ifndef WINDOWCONTROLLER_H
#define WINDOWCONTROLLER_H

#include <string>
#include <map>

#include <controller/controller_base.h>
#include <container_impl.h>
#include <model/window_model.h>

namespace gui
{

namespace controller
{

class WindowController : public ControllerBase,
						 public ContainerImpl<std::shared_ptr<ControllerBase>>
{
public:
	// Instance
	WindowController(HWND hWnd);
	virtual ~WindowController();

public:
	// ControllerBase abstract Attributes implementation
	std::shared_ptr<model::IModelElement> getModelElement() const;
	
	// WindowController Attributes
	void setWindowModel(const std::shared_ptr<model::WindowModel>& window_model);
	std::shared_ptr<model::WindowModel> getWindowModel() const;

public:
	// WindowController Methods
	void showWindow();
	
protected:
	std::shared_ptr<model::WindowModel> window_model;
};

}

}

#endif // WINDOWCONTROLLER_H
