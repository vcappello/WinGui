#ifndef CONTROLBASEMODEL_H
#define CONTROLBASEMODEL_H

#include <string>

#include <model/i_model_element.h>
#include <model/i_placeable.h>

namespace gui
{

namespace model
{

class ControlBaseModel : public IModelElement,
						 public IPlaceable
{
public:
	ControlBaseModel();
	~ControlBaseModel();

public:
	void setName(const std::string& name);
	std::string getName() const;
	
	void setTop(int top);	
	int getTop() const;

	void setLeft(int left);
	int getLeft() const;
	
	void setWidth(int width);	
	int getWidth() const;
	
	void setHeight(int height);
	int getHeight() const;

	void setVisible(bool visible);
	bool isVisible() const;	
	
protected:
	std::string name;	
	bool visible;
	
	int top;
	int left;	
	int width;
	int height;		
};

}

}

#endif // CONTROLBASEMODEL_H
