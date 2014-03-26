#ifndef IPLACEABLE_H
#define IPLACEABLE_H

#include <memory>

#include <model/point.h>
#include <model/size.h>
#include <model/i_model_element.h>

namespace gui
{

namespace model
{

class IPlaceable
{
public:
	IPlaceable()
	{
	}
	virtual ~IPlaceable()
	{
	}

	virtual std::shared_ptr<Point> getLocation() = 0;
	virtual std::shared_ptr<Point> getLocation() const = 0;
	virtual void setLocation(std::shared_ptr<Point> value) = 0;
	
	virtual std::shared_ptr<Size> getSize() = 0;
	virtual std::shared_ptr<Size> getSize() const = 0;
	virtual void setSize(std::shared_ptr<Size> value) = 0;
	
	virtual IModelElement::property_changed_event_t getLocationChangedEvent() = 0;
	virtual IModelElement::property_changed_event_t getSizeChangedEvent() = 0;
};

}

}

#endif // IPLACEABLE_H
