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
	
	typedef typename std::shared_ptr<Event<>::connection_t> property_changed_connection_t;
	typedef std::shared_ptr<Event<>> property_changed_event_t;
	
	virtual property_changed_event_t getNameChangedEvent() = 0;
};

}

}

#endif // IMODELELEMENT_H
