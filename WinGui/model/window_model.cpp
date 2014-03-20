#include "window_model.h"

namespace gui
{

namespace model
{

WindowModel::WindowModel() :
	name_changed_event( new Event<>() ),
	visible_changed_event( new Event<>() ),
	caption_changed_event( new Event<>() ),
	top_changed_event( new Event<>() ),
	left_changed_event( new Event<>() ),
	width_changed_event( new Event<>() ),
	height_changed_event( new Event<>() ),
	font_model_changed_event( new Event<>() ),	
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
	if (name != value)
	{
		name = value;
		name_changed_event->fire();
	}
}

std::string WindowModel::getName() const 
{
	return name;
}

void WindowModel::setVisible(bool value)
{
	if (visible != value)
	{
		visible = value;
		visible_changed_event->fire();
	}
}

bool WindowModel::isVisible() const
{
	return visible;
}
	
void WindowModel::setTop(int value)
{
	if (top != value)
	{
		top = value;
		top_changed_event->fire();
	}
}

int WindowModel::getTop() const
{
	return top;
}

void WindowModel::setLeft(int value)
{
	if (left != value)
	{
		left = value;
		left_changed_event->fire();
	}
}

int WindowModel::getLeft() const
{
	return left;
}	

void WindowModel::setWidth(int value) 
{
	if (width != value)
	{
		width = value;
		width_changed_event->fire();
	}
}

int WindowModel::getWidth() const 
{
	return width;
}

void WindowModel::setHeight(int value) 
{
	if (height != value)
	{
		height = value;
		height_changed_event->fire();
	}
}

int WindowModel::getHeight() const 
{
	return height;
}

void WindowModel::setCaption(const std::string& value) 
{
	if (caption != value)
	{
		caption = value;
		caption_changed_event->fire();
	}
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
	if (font_model != value)
	{
		font_model = value;
		font_model_changed_event->fire();
	}
}

}

}

