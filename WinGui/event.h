#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <list>
#include <functional>

namespace gui
{

template<typename...Arguments>
class Event
{
public:
	Event()
	{
	}
	virtual ~Event()
	{
	}
	
public:
	typedef std::function<void(Arguments...)> handler_t;
	
	void fire(Arguments... parameters)
	{
		for(auto handler : registry)
			handler (parameters...);
	}
	
	void registerHandler(handler_t handler)
	{
		registry.push_back (handler);
	}
	
	void unregisterHandler(handler_t handler)
	{
		auto handler_itor = std::find(registry.begin(), registry.end(), handler);
		if (handler_itor != registry.end())
			registry.erase (handler_itor);
	}
	
	void unregisterAll()
	{
		registry.clear();
	}
	
	bool hasSubscriptions() const { return !registry.empty(); }
	
protected:
	std::list<handler_t> registry;
};

}

#endif // EVENT_H
