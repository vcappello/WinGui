#include "size.h"

namespace gui
{

namespace model
{

Size::Size() :
	Size( 0, 0 )
{
}

Size::Size(int width, int height) :
	width( width ),
	height( height ),
	name_changed_event( new Event<>() ),
	width_changed_event( new Event<>() ),
	height_changed_event( new Event<>() )
{
	
}

Size::~Size()
{
}

std::string Size::getName() const
{
	return name;
}

void Size::setName(const std::string& value)
{
	if (name != value)
	{
		name = value;
		name_changed_event->fire();
	}
}

int Size::getWidth() const
{
	return width;
}

void Size::setWidth(int value)
{
	if (width != value)
	{
		width = value;
		width_changed_event->fire();
	}	
}

int Size::getHeight() const
{
	return height;
}

void Size::setHeight(int value)
{
	if (height != value)
	{
		height = value;
		height_changed_event->fire();
	}	
}

void Size::set(std::shared_ptr<Size> data)
{
	setWidth (data->getWidth());
	setHeight (data->getHeight());
}

}

}

