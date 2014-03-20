#ifndef EDITMODEL_H
#define EDITMODEL_H

#include <string>

#include <model/control_base_model.h>

namespace gui
{

namespace model
{

class EditModel : public ControlBaseModel
{
public:
	EditModel();
	~EditModel();

public:
	void setText(const std::string& value);
	std::string getText() const;

public:
	// EditModel Events
	IModelElement::property_changed_event_t getTextChangedEvent() { return text_changed_event; }	
	
protected:
	std::string text;
	
	IModelElement::property_changed_event_t text_changed_event;		
};

}

}

#endif // EDITMODEL_H
