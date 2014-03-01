#include "window_model.h"

#include <algorithm>

namespace gui
{

namespace model
{

WindowModel::WindowModel()
{
}

WindowModel::~WindowModel()
{
}

void WindowModel::setName(const std::string& name) 
{
	this->name = name;
}

std::string WindowModel::getName() const 
{
	return name;
}

void WindowModel::setVisible(bool visible)
{
	this->visible = visible;
}

bool WindowModel::isVisible() const
{
	return visible;
}
	
void WindowModel::setTop(int top)
{
	this->top = top;
}

int WindowModel::getTop() const
{
	return top;
}

void WindowModel::setLeft(int left)
{
	this->left = left;
}

int WindowModel::getLeft() const
{
	return left;
}	

void WindowModel::setWidth(int width) 
{
	this->width = width;
}

int WindowModel::getWidth() const 
{
	return width;
}

void WindowModel::setHeight(int height) 
{
	this->height = height;
}

int WindowModel::getHeight() const 
{
	return height;
}

void WindowModel::setCaption(const std::string& caption) 
{
	this->caption = caption;
}

std::string WindowModel::getCaption() const 
{
	return caption;
}

void WindowModel::add(std::shared_ptr<IModelElement> child)
{
	children.push_back (child);
}

void WindowModel::erase(const std::string& name)
{
	auto child_itor = std::find_if(children.begin(), children.end(), [&](std::shared_ptr<IModelElement> e){ 
			return e->getName() == name;
		});
		
	if (child_itor == children.end())
		throw Error("A children with the name {" + name + "} does not exist");
		
	children.erase (child_itor);
}

std::shared_ptr<IModelElement> WindowModel::get(const std::string& name)
{
	auto child_itor = std::find_if(children.begin(), children.end(), [&](std::shared_ptr<IModelElement> e){ 
			return e->getName() == name;
		});
		
	if (child_itor == children.end())
		throw Error("A children with the name {" + name + "} does not exist");
		
	return *child_itor;	
}

WindowModel::iterator_t WindowModel::childrenBegin()
{
	return children.begin();
}

WindowModel::iterator_t WindowModel::childrenEnd()
{
	return children.end();
}	

}

}

