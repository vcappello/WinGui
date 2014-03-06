#ifndef IPLACEABLE_H
#define IPLACEABLE_H

namespace gui
{

namespace model
{

class IPlaceable
{
public:
	IPlaceable()
	{
	}
	virtual ~IPlaceable()
	{
	}

	virtual void setTop(int top) = 0;	
	virtual int getTop() const = 0;

	virtual void setLeft(int left) = 0;
	virtual int getLeft() const = 0;
	
	virtual void setWidth(int width) = 0;	
	virtual int getWidth() const = 0;
	
	virtual void setHeight(int height) = 0;
	virtual int getHeight() const = 0;
};

}

}

#endif // IPLACEABLE_H
