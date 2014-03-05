#include "window_model.h"

namespace gui
{

namespace model
{

WindowModel::WindowModel() :
	top( CW_USEDEFAULT ),
	left( CW_USEDEFAULT ),
	width( CW_USEDEFAULT ),
	height( CW_USEDEFAULT )
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

}

}

