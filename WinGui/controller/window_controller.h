#ifndef WINDOWCONTROLLER_H
#define WINDOWCONTROLLER_H

#include <string>
#include <map>

#include <controller/controller_base.h>
#include <model/window_model.h>

namespace gui
{

namespace controller
{

class WindowController : public ControllerBase
{
public:
	// Instance
	WindowController(HWND hWnd);
	virtual ~WindowController();

public:
	// Attributes
	std::shared_ptr<model::IModelElement> getModelElement() const;
	
	void setWindowModel(const std::shared_ptr<model::WindowModel>& window_model);
	std::shared_ptr<model::WindowModel> getWindowModel() const;

public:
	// Methods
	void showWindow();
	
	// Container
	void add(const std::string& name, std::shared_ptr<ControllerBase> item);
	void erase(const std::string& name);
	std::shared_ptr<ControllerBase> get(const std::string& name);
	
protected:
	std::shared_ptr<model::WindowModel> window_model;
	
	std::map<std::string, std::shared_ptr<ControllerBase>> children;
};

}

}

#endif // WINDOWCONTROLLER_H
