#ifndef IMODELELEMENT_H
#define IMODELELEMENT_H

#include <string>

namespace gui
{

namespace model
{

class IModelElement
{
public:
	IModelElement()
	{
	}
	virtual ~IModelElement()
	{
	}

	virtual void setName(const std::string& name) = 0;
	virtual std::string getName() const = 0;
	
	virtual void setVisible(bool visible) = 0;
	virtual bool isVisible() const = 0;
	
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

#endif // IMODELELEMENT_H
