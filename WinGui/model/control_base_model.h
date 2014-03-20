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
	void setName(const std::string& value);
	std::string getName() const;
	
	// IPlaceable Attributes
	void setTop(int value);	
	int getTop() const;

	void setLeft(int value);
	int getLeft() const;
	
	void setWidth(int value);	
	int getWidth() const;
	
	void setHeight(int value);
	int getHeight() const;

	// ControlBaseModel Attributes
	void setVisible(bool value);
	bool isVisible() const;	
	
	std::shared_ptr<gui::model::FontModel> getFontModel() const;
	void setFontModel(std::shared_ptr<gui::model::FontModel> value);

public:
	// IModelElement Events
	IModelElement::property_changed_event_t getNameChangedEvent() { return name_changed_event; }

	// ControlBaseModel Events
	IModelElement::property_changed_event_t getVisibleChangedEvent() { return visible_changed_event; }
	IModelElement::property_changed_event_t getTopChangedEvent() { return top_changed_event; }
	IModelElement::property_changed_event_t getLeftChangedEvent() { return left_changed_event; }
	IModelElement::property_changed_event_t getWidthChangedEvent() { return width_changed_event; }
	IModelElement::property_changed_event_t getHeightChangedEvent() { return height_changed_event; }
	IModelElement::property_changed_event_t getFontModelChangedEvent() { return font_model_changed_event; }
	
protected:
	std::string name;		
	bool visible;
	int top;
	int left;	
	int width;
	int height;		
	std::shared_ptr<gui::model::FontModel> font_model;
	
	IModelElement::property_changed_event_t name_changed_event;
	IModelElement::property_changed_event_t visible_changed_event;
	IModelElement::property_changed_event_t top_changed_event;
	IModelElement::property_changed_event_t left_changed_event;
	IModelElement::property_changed_event_t width_changed_event;
	IModelElement::property_changed_event_t height_changed_event;
	IModelElement::property_changed_event_t font_model_changed_event;
};

}

}

#endif // CONTROLBASEMODEL_H
