#ifndef CONTROLBASEMODEL_H
#define CONTROLBASEMODEL_H

#include <string>
#include <memory>

#include <windows.h>

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
	virtual std::shared_ptr<Point> getLocation();
	virtual std::shared_ptr<Point> getLocation() const;
	virtual void setLocation(std::shared_ptr<Point> value);
	
	virtual std::shared_ptr<Size> getSize();
	virtual std::shared_ptr<Size> getSize() const;
	virtual void setSize(std::shared_ptr<Size> value);

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
	IModelElement::property_changed_event_t getLocationChangedEvent() { return location_changed_event; }
	IModelElement::property_changed_event_t getSizeChangedEvent() { return size_changed_event; }
	IModelElement::property_changed_event_t getFontModelChangedEvent() { return font_model_changed_event; }
	
protected:
	std::string name;		
	bool visible;
	std::shared_ptr<gui::model::Point> location;
	std::shared_ptr<gui::model::Size> size;
	std::shared_ptr<gui::model::FontModel> font_model;
	
	IModelElement::property_changed_event_t name_changed_event;
	IModelElement::property_changed_event_t visible_changed_event;
	IModelElement::property_changed_event_t location_changed_event;
	IModelElement::property_changed_event_t size_changed_event;
	IModelElement::property_changed_event_t font_model_changed_event;
};

}

}

#endif // CONTROLBASEMODEL_H
