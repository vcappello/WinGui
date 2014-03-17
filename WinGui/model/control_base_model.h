#ifndef CONTROLBASEMODEL_H
#define CONTROLBASEMODEL_H

#include <string>
#include <memory>

#include <model/i_model_element.h>
#include <model/i_placeable.h>
#include <model/font_model.h>

namespace gui
{

namespace model
{

class ControlBaseModel : public IModelElement,
						 public IPlaceable
{
public:
	ControlBaseModel();
	~ControlBaseModel();

public:
	// IModelElement Attributes
	void setName(const std::string& name);
	std::string getName() const;
	
	// IPlaceable Attributes
	void setTop(int top);	
	int getTop() const;

	void setLeft(int left);
	int getLeft() const;
	
	void setWidth(int width);	
	int getWidth() const;
	
	void setHeight(int height);
	int getHeight() const;

	// ControlBaseModel Attributes
	void setVisible(bool visible);
	bool isVisible() const;	
	
	std::shared_ptr<gui::model::FontModel> getFontModel() const;
	void setFontModel(std::shared_ptr<gui::model::FontModel> value);

public:
	// IModelElement events
	IModelElement::property_changed_event_t getPropertyChangedEvent() { return property_changed_event; }
		
protected:
	std::string name;	
	IModelElement::property_changed_event_t property_changed_event;
	
	bool visible;
	
	int top;
	int left;	
	int width;
	int height;		
	
	std::shared_ptr<gui::model::FontModel> font_model;
};

}

}

#endif // CONTROLBASEMODEL_H
