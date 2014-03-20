#include "control_base_model.h"

namespace gui
{

namespace model
{

ControlBaseModel::ControlBaseModel() :
	name_changed_event( new Event<>() ),
	visible_changed_event( new Event<>() ),
	top_changed_event( new Event<>() ),
	left_changed_event( new Event<>() ),
	width_changed_event( new Event<>() ),
	height_changed_event( new Event<>() ),
	font_model_changed_event( new Event<>() )
{
}

ControlBaseModel::~ControlBaseModel()
{
}

void ControlBaseModel::setName(const std::string& value) 
{
	if (name != value)
	{
		name = value;
		name_changed_event->fire();
	}
}

std::string ControlBaseModel::getName() const 
{
	return name;
}

void ControlBaseModel::setVisible(bool value)
{
	if (visible != value)
	{
		visible = value;
		visible_changed_event->fire();
	}
}

bool ControlBaseModel::isVisible() const
{
	return visible;
}
	
void ControlBaseModel::setTop(int value)
{
	if (top != value)
	{
		top = value;
		top_changed_event->fire();
	}
}

int ControlBaseModel::getTop() const
{
	return top;
}

void ControlBaseModel::setLeft(int value)
{
	if (left != value)
	{
		left = value;
		left_changed_event->fire();
	}
}

int ControlBaseModel::getLeft() const
{
	return left;
}	

void ControlBaseModel::setWidth(int value) 
{
	if (width != value)
	{
		width = value;
		width_changed_event->fire();
	}
}

int ControlBaseModel::getWidth() const 
{
	return width;
}

void ControlBaseModel::setHeight(int value) 
{
	if (height != value)
	{
		height = value;
		height_changed_event->fire();
	}
}

int ControlBaseModel::getHeight() const 
{
	return height;
}

std::shared_ptr<gui::model::FontModel> ControlBaseModel::getFontModel() const
{
	return font_model;
}

void ControlBaseModel::setFontModel(std::shared_ptr<gui::model::FontModel> value)
{
	if (font_model != value)
	{
		font_model = value;
		font_model_changed_event->fire();
	}
}

}

}

