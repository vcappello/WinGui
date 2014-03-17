#include "window_model.h"

namespace gui
{

namespace model
{

WindowModel::WindowModel() :
	property_changed_event( new Event<std::string> ),
	top( CW_USEDEFAULT ),
	left( CW_USEDEFAULT ),
	width( CW_USEDEFAULT ),
	height( CW_USEDEFAULT )
{
}

WindowModel::~WindowModel()
{
}

void WindowModel::setName(const std::string& value) 
{
	name = value;
	property_changed_event->fire ("Name");
}

std::string WindowModel::getName() const 
{
	return name;
}

void WindowModel::setVisible(bool value)
{
	visible = value;
	property_changed_event->fire ("Visible");
}

bool WindowModel::isVisible() const
{
	return visible;
}
	
void WindowModel::setTop(int value)
{
	top = value;
	property_changed_event->fire ("Top");
}

int WindowModel::getTop() const
{
	return top;
}

void WindowModel::setLeft(int value)
{
	left = value;
	property_changed_event->fire ("Left");
}

int WindowModel::getLeft() const
{
	return left;
}	

void WindowModel::setWidth(int value) 
{
	width = value;
	property_changed_event->fire ("Width");	
}

int WindowModel::getWidth() const 
{
	return width;
}

void WindowModel::setHeight(int value) 
{
	height = value;
	property_changed_event->fire ("Height");
}

int WindowModel::getHeight() const 
{
	return height;
}

void WindowModel::setCaption(const std::string& value) 
{
	caption = value;
	property_changed_event->fire ("Caption");
}

std::string WindowModel::getCaption() const 
{
	return caption;
}

std::shared_ptr<gui::model::FontModel> WindowModel::getFontModel() const
{
	return font_model;
}

void WindowModel::setFontModel(std::shared_ptr<gui::model::FontModel> value)
{
	font_model = value;
	property_changed_event->fire ("FontModel");	
}

}

}

