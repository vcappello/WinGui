#ifndef CONTAINERIMPL_H
#define CONTAINERIMPL_H

#include <list>
#include <algorithm>

#include <error.h>

namespace gui
{

class ContainerNoBase
{
public:
	ContainerNoBase()
	{
	}
	virtual ~ContainerNoBase()
	{
	}
};

	
template <class T, class Q = ContainerNoBase>
class ContainerImpl : public Q
{
public:
	ContainerImpl()
	{
	}
	virtual ~ContainerImpl()
	{
	}

public:
	void add(const T& item)
	{
		auto child_itor = std::find_if(children.begin(), children.end(), [&](T e){ 
				return e->getName() == item->getName();
			});
			
		if (child_itor != children.end())
			throw Error("A children with the name '" + item->getName() + "' already exist");
					
		children.push_back (item);
	}
	
	T get(const std::string& name)
	{
		auto child_itor = std::find_if(children.begin(), children.end(), [&](T e){ 
				return e->getName() == name;
			});
			
		if (child_itor == children.end())
			throw Error("A children with the name '" + name + "' does not exist");
			
		return *child_itor;	
	}

	T get(const std::string& name) const
	{
		auto child_itor = std::find_if(children.begin(), children.end(), [&](T e){ 
				return e->getName() == name;
			});
			
		if (child_itor == children.end())
			throw Error("A children with the name '" + name + "' does not exist");
			
		return *child_itor;	
	}
	
	void erase(const std::string& name)
	{
		auto child_itor = std::find_if(children.begin(), children.end(), [&](T e){ 
				return e->getName() == name;
			});
			
		if (child_itor == children.end())
			throw Error("A children with the name '" + name + "' does not exist");
			
		children.erase (child_itor);
	}
	
public:
	typedef typename std::list<T> container_t;
	typedef typename container_t::iterator iterator_t;
	typedef typename container_t::const_iterator const_iterator_t;
	
	iterator_t begin() { return children.begin(); }
	const_iterator_t begin() const { return children.begin(); }
	
	iterator_t end() { return children.end(); }
	const_iterator_t end() const { return children.end(); }
	
protected:
	container_t children;
};

}

#endif // CONTAINERIMPL_H
