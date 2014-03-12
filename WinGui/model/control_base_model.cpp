#include "control_base_model.h"

namespace gui
{

namespace model
{

ControlBaseModel::ControlBaseModel()
{
}

ControlBaseModel::~ControlBaseModel()
{
}

void ControlBaseModel::setName(const std::string& name) 
{
	this->name = name;
}

std::string ControlBaseModel::getName() const 
{
	return name;
}

void ControlBaseModel::setVisible(bool visible)
{
	this->visible = visible;
}

bool ControlBaseModel::isVisible() const
{
	return visible;
}
	
void ControlBaseModel::setTop(int top)
{
	this->top = top;
}

int ControlBaseModel::getTop() const
{
	return top;
}

void ControlBaseModel::setLeft(int left)
{
	this->left = left;
}

int ControlBaseModel::getLeft() const
{
	return left;
}	

void ControlBaseModel::setWidth(int width) 
{
	this->width = width;
}

int ControlBaseModel::getWidth() const 
{
	return width;
}

void ControlBaseModel::setHeight(int height) 
{
	this->height = height;
}

int ControlBaseModel::getHeight() const 
{
	return height;
}

}

}

