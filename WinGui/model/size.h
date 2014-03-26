#ifndef SIZE_H
#define SIZE_H

#include <string>
#include <memory>

#include <model/i_model_element.h>

namespace gui
{

namespace model
{

class Size : public IModelElement
{
public:
	Size();
	Size(int width, int height);
	~Size();
	
public:
	// IModelElement Attributes
	void setName(const std::string& value);
	std::string getName() const;
	
	// Size Attributes
	int getWidth() const;
	void setWidth(int value);
	
	int getHeight() const;
	void setHeight(int value);

	void set(std::shared_ptr<Size> data);
	
public:
	// IModelElement events
	IModelElement::property_changed_event_t getNameChangedEvent() { return name_changed_event; }
			
	// Size events
	IModelElement::property_changed_event_t getWidthChangedEvent() { return width_changed_event; }
	IModelElement::property_changed_event_t getHeightChangedEvent() { return height_changed_event; }
	
public:
	bool operator== (const Size& rhs)
	{
		return width == rhs.getWidth() && height == rhs.getHeight();
	}
	
	bool operator!= (const Size& rhs)
	{
		return width != rhs.getWidth() || height != rhs.getHeight();
	}
	
protected:
	std::string name;
	int width;
	int height;
	
	IModelElement::property_changed_event_t name_changed_event;
	IModelElement::property_changed_event_t width_changed_event;
	IModelElement::property_changed_event_t height_changed_event;
};

}

}

#endif // SIZE_H
