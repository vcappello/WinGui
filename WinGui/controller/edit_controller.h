#ifndef EDITCONTROLLER_H
#define EDITCONTROLLER_H

#include <controller/abstract_windowed_controller.h>
#include <controller/i_commandable.h>
#include <model/edit_model.h>

namespace gui
{

namespace controller
{

class EditController : public AbstractWindowedController, 
					   public ICommandable
{
public:
	EditController(HWND hWnd, int command_id);
	~EditController();

public:
	std::shared_ptr<model::IModelElement> getModelElement() const;
	
	int getCommandId() const;
	
	void setEditModel(const std::shared_ptr<model::EditModel>& value);
	std::shared_ptr<model::EditModel> getEditModel() const;
	
	std::string getText();
	void setText(const std::string& value);
	
public:
	void fireCommandEvent(WPARAM wParam, LPARAM lParam);
	
	
	typedef std::shared_ptr<Event<>> change_event_t;
	virtual EditController::change_event_t onChangeEvent() { return change_event; }
	
protected:
	std::shared_ptr<model::EditModel> edit_model;
	int command_id;
	
protected:
	change_event_t change_event;
};

}

}

#endif // EDITCONTROLLER_H
