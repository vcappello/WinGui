#ifndef BUTTONCONTROLLER_H
#define BUTTONCONTROLLER_H

#include <controller/abstract_windowed_controller.h>
#include <controller/i_commandable.h>
#include <model/button_model.h>

namespace gui
{

namespace controller
{

class ButtonController : public AbstractWindowedController, 
						 public ICommandable
{
public:
	ButtonController(HWND hWnd, int command_id);
	virtual ~ButtonController();
	
public:
	std::shared_ptr<model::IModelElement> getModelElement() const;
	
	int getCommandId() const;
	
	void setButtonModel(const std::shared_ptr<model::ButtonModel>& button_model);
	std::shared_ptr<model::ButtonModel> getButtonModel() const;
	
public:
	void fireCommandEvent(WPARAM wParam, LPARAM lParam);
	
	typedef typename std::shared_ptr<Event<>> click_event_t;
	virtual ButtonController::click_event_t onClickEvent() { return click_event; }
	
protected:
	std::shared_ptr<model::ButtonModel> button_model;
	int command_id;
	
protected:
	click_event_t click_event;
};

}

}

#endif // BUTTONCONTROLLER_H
