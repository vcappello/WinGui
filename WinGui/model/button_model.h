#ifndef BUTTONMODEL_H
#define BUTTONMODEL_H

#include <string>

#include <model/i_model_element.h>
#include <model/i_placeable.h>

namespace gui
{

namespace model
{

class ButtonModel : public IModelElement,
					public IPlaceable
{
public:
	ButtonModel();
	virtual ~ButtonModel();

public:
	void setName(const std::string& name);
	std::string getName() const;
	
	void setVisible(bool visible);
	bool isVisible() const;
	
	void setTop(int top);	
	int getTop() const;

	void setLeft(int left);
	int getLeft() const;
	
	void setWidth(int width);	
	int getWidth() const;
	
	void setHeight(int height);
	int getHeight() const;
	
	void setText(const std::string& text);
	std::string getText() const;
	
protected:
	std::string name;	
	bool visible;
	std::string text;
	
	int top;
	int left;	
	int width;
	int height;	
};

}

}

#endif // BUTTONMODEL_H
