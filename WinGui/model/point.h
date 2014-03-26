#ifndef POINT_H
#define POINT_H

#include <string>
#include <memory>

#include <model/i_model_element.h>

namespace gui
{

namespace model
{

class Point : public IModelElement
{
public:
	Point();
	Point(int x, int y);
	~Point();

public:
	// IModelElement Attributes
	void setName(const std::string& value);
	std::string getName() const;
	
	// Point Attributes
	int getX() const;
	void setX(int value);
	
	int getY() const;
	void setY(int value);

	void set(std::shared_ptr<Point> data);
	
public:
	// IModelElement events
	IModelElement::property_changed_event_t getNameChangedEvent() { return name_changed_event; }
			
	// Point events
	IModelElement::property_changed_event_t getXChangedEvent() { return x_changed_event; }
	IModelElement::property_changed_event_t getYChangedEvent() { return y_changed_event; }
	
public:
	bool operator== (const Point& rhs)
	{
		return x == rhs.getX() && y == rhs.getY();
	}
	
	bool operator!= (const Point& rhs)
	{
		return x != rhs.getX() || y != rhs.getY();
	}
	
protected:
	std::string name;
	int x;
	int y;
	
	IModelElement::property_changed_event_t name_changed_event;	
	IModelElement::property_changed_event_t x_changed_event;	
	IModelElement::property_changed_event_t y_changed_event;	
};

}

}

#endif // POINT_H
