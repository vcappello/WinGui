#include "window_model.h"

namespace gui
{

namespace model
{

WindowModel::WindowModel() :
	name_changed_event( new Event<>() ),
	visible_changed_event( new Event<>() ),
	caption_changed_event( new Event<>() ),
	location_changed_event( new Event<>() ),
	size_changed_event( new Event<>() ),
	font_model_changed_event( new Event<>() ),	
	location( new Point( CW_USEDEFAULT, CW_USEDEFAULT )  ),
	size( new Size( CW_USEDEFAULT, CW_USEDEFAULT ) ),
	font_model( new FontModel() )
{
	location->getXChangedEvent()->registerHandler([&]{
			location_changed_event->fire();
		});
	location->getYChangedEvent()->registerHandler([&]{
			location_changed_event->fire();
		});

	size->getWidthChangedEvent()->registerHandler([&]{
			size_changed_event->fire();
		});
	size->getHeightChangedEvent()->registerHandler([&]{
			size_changed_event->fire();
		});

	font_model->getFamilyNameChangedEvent()->registerHandler([&]{
			font_model_changed_event->fire();
		});
	font_model->getFontSizeChangedEvent()->registerHandler([&]{
			font_model_changed_event->fire();
		});
	font_model->getFontStyleChangedEvent()->registerHandler([&]{
			font_model_changed_event->fire();
		});
	font_model->getFontWeightChangedEvent()->registerHandler([&]{
			font_model_changed_event->fire();
		});
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

std::shared_ptr<Point> WindowModel::getLocation()
{
	return location;
}

std::shared_ptr<Point> WindowModel::getLocation() const
{
	return location;
}

void WindowModel::setLocation(std::shared_ptr<Point> value)
{
	if (*location != *value)
	{
		location->set (value);
	}
}

std::shared_ptr<Size> WindowModel::getSize()
{
	return size;
}

std::shared_ptr<Size> WindowModel::getSize() const
{
	return size;
}

void WindowModel::setSize(std::shared_ptr<Size> value)
{
	if (*size != *value)
	{
		size->set (value);
	}
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
	if (*font_model != *value)
	{
		font_model->set (value);
	}
}

}

}

