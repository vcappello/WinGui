#ifndef IMODELELEMENT_H
#define IMODELELEMENT_H

#include <string>
#include <memory>

#include <event.h>

namespace gui
{

namespace model
{

class IModelElement
{
public:
	IModelElement()
	{
	}
	virtual ~IModelElement()
	{
	}

	virtual void setName(const std::string& name) = 0;
	virtual std::string getName() const = 0;
	
	typedef std::shared_ptr<Event<std::string>> property_changed_event_t;
	
	virtual property_changed_event_t getPropertyChangedEvent() = 0;
};

}

}

#endif // IMODELELEMENT_H
