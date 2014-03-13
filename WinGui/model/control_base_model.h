#ifndef CONTROLBASEMODEL_H
#define CONTROLBASEMODEL_H

#include <string>
#include <memory>

#include <model/i_model_element.h>
#include <model/i_placeable.h>
#include <model/font_model.h>

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
	
	std::shared_ptr<gui::model::FontModel> getFontModel() const;
	void setFontModel(std::shared_ptr<gui::model::FontModel> value);
	
protected:
	std::string name;	
	bool visible;
	
	int top;
	int left;	
	int width;
	int height;		
	
	std::shared_ptr<gui::model::FontModel> font_model;
};

}

}

#endif // CONTROLBASEMODEL_H
