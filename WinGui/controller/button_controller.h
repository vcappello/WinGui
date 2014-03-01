#ifndef BUTTONCONTROLLER_H
#define BUTTONCONTROLLER_H

#include <controller/controller_base.h>
#include <model/button_model.h>

namespace gui
{

namespace controller
{

class ButtonController : public ControllerBase
{
public:
	ButtonController(HWND hWnd);
	virtual ~ButtonController();
	
public:
	std::shared_ptr<model::IModelElement> getModelElement() const;
	
	void setButtonModel(const std::shared_ptr<model::ButtonModel>& button_model);
	std::shared_ptr<model::ButtonModel> getButtonModel() const;
	
protected:
	std::shared_ptr<model::ButtonModel> button_model;	
};

}

}

#endif // BUTTONCONTROLLER_H
