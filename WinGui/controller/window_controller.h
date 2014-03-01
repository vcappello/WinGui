#ifndef WINDOWCONTROLLER_H
#define WINDOWCONTROLLER_H

#include <controller/controller_base.h>
#include <model/window_model.h>

namespace gui
{

namespace controller
{

class WindowController : public ControllerBase
{
public:
	WindowController(HWND hWnd);
	virtual ~WindowController();

public:
	std::shared_ptr<model::IModelElement> getModelElement() const;
	
	void setWindowModel(const std::shared_ptr<model::WindowModel>& window_model);
	std::shared_ptr<model::WindowModel> getWindowModel() const;

public:
	void showWindow();
	
protected:
	std::shared_ptr<model::WindowModel> window_model;
};

}

}

#endif // WINDOWCONTROLLER_H
