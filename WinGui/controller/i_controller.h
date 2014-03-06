#ifndef ICONTROLLER_H
#define ICONTROLLER_H

#include <string>
#include <memory>

#include <model/i_model_element.h>

namespace gui
{

namespace controller
{

class IController
{
public:
	IController()
	{
	}
	virtual ~IController()
	{
	}

	virtual std::string getName() const = 0;
	virtual void setName(const std::string& value) = 0;
	
	virtual std::shared_ptr<model::IModelElement> getModelElement() const = 0;
};

}

}

#endif // ICONTROLLER_H
