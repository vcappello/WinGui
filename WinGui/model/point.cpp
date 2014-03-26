#include "point.h"

namespace gui
{

namespace model
{

Point::Point() :
	Point( 0, 0 )
{
}

Point::Point(int x, int y) :
	x( x ),
	y( y ),
	name_changed_event( new Event<>() ),
	x_changed_event( new Event<>() ),
	y_changed_event( new Event<>() )
{
	
}

Point::~Point()
{
}

std::string Point::getName() const
{
	return name;
}

void Point::setName(const std::string& value)
{
	if (name != value)
	{
		name = value;
		name_changed_event->fire();
	}
}

int Point::getX() const
{
	return x;
}

void Point::setX(int value)
{
	if (x != value)
	{
		x = value;
		x_changed_event->fire();
	}	
}

int Point::getY() const
{
	return y;
}

void Point::setY(int value)
{
	if (y != value)
	{
		y = value;
		y_changed_event->fire();
	}	
}

void Point::set(std::shared_ptr<Point> data)
{
	setX (data->getX());
	setY (data->getY());
}

}

}
