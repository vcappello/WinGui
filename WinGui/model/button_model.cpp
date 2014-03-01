#include "button_model.h"

namespace gui
{

namespace model
{

ButtonModel::ButtonModel()
{
}

ButtonModel::~ButtonModel()
{
}

void ButtonModel::setName(const std::string& name) 
{
	this->name = name;
}

std::string ButtonModel::getName() const 
{
	return name;
}

void ButtonModel::setVisible(bool visible)
{
	this->visible = visible;
}

bool ButtonModel::isVisible() const
{
	return visible;
}
	
void ButtonModel::setTop(int top)
{
	this->top = top;
}

int ButtonModel::getTop() const
{
	return top;
}

void ButtonModel::setLeft(int left)
{
	this->left = left;
}

int ButtonModel::getLeft() const
{
	return left;
}	

void ButtonModel::setWidth(int width) 
{
	this->width = width;
}

int ButtonModel::getWidth() const 
{
	return width;
}

void ButtonModel::setHeight(int height) 
{
	this->height = height;
}

int ButtonModel::getHeight() const 
{
	return height;
}

void ButtonModel::setText(const std::string& text)
{
	this->text = text;
}

std::string ButtonModel::getText() const
{
	return text;
}	

}

}

