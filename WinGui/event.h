#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <list>
#include <functional>
#include <memory>

namespace gui
{

template<typename...Arguments>
class EventConnection
{
	
public:	
	typedef std::function<void(Arguments...)> handler_t;
	
public:
	EventConnection(handler_t handler) : 
		handler( handler ),
		enabled( true ) 
	{
	}
		
	virtual ~EventConnection() {}
	
public:
	void fire(Arguments... parameters)
	{
		if (enabled)
			handler (parameters...);
	}
	
	bool isEnabled() const { return enabled; }
	void setEnabled(bool value) { enabled = value; }
	
protected:
	handler_t handler;
	bool enabled;
};

template<typename...Arguments>
class Event
{
public:
	Event() {}
	virtual ~Event() {}
	
public:
	typedef EventConnection<Arguments...> connection_t;
	typedef typename connection_t::handler_t handler_t;

	
	void fire(Arguments... parameters)
	{
		for(auto handler : registry)
			handler->fire (parameters...);
	}
	
	std::shared_ptr<connection_t> registerHandler(handler_t handler)
	{
		std::shared_ptr<connection_t> connection( new connection_t(handler) );
		registry.push_back (connection);
		return connection;
	}
	
	void unregisterHandler(std::shared_ptr<connection_t> connection)
	{
		auto connection_itor = std::find(registry.begin(), registry.end(), connection);
		if (connection_itor != registry.end())
			registry.erase (connection_itor);
	}
	
	void unregisterAll()
	{
		registry.clear();
	}
	
	bool hasSubscriptions() const { return !registry.empty(); }
	
protected:
	std::list<std::shared_ptr<connection_t>> registry;
};

}

#endif // EVENT_H
