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
};

}

}

#endif // IMODELELEMENT_H
