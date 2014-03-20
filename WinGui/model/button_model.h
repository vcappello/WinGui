#ifndef BUTTONMODEL_H
#define BUTTONMODEL_H

#include <string>

#include <model/control_base_model.h>

namespace gui
{

namespace model
{

class ButtonModel : public ControlBaseModel
{
public:
	ButtonModel();
	virtual ~ButtonModel();

public:
	void setText(const std::string& value);
	std::string getText() const;
	
public:
	// ButtonModel Events
	IModelElement::property_changed_event_t getTextChangedEvent() { return text_changed_event; }
	
protected:
	std::string text;
	
	IModelElement::property_changed_event_t text_changed_event;	
};

}

}

#endif // BUTTONMODEL_H
