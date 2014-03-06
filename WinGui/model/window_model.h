#ifndef WINDOWMODEL_H
#define WINDOWMODEL_H

#include <string>
#include <list>
#include <memory>

#include <windows.h>

#include <model/i_model_element.h>
#include <model/i_placeable.h>
#include <container_impl.h>
#include <error.h>

namespace gui
{

namespace model
{

class WindowModel : public IModelElement,
					public IPlaceable,
					public ContainerImpl<std::shared_ptr<IModelElement>>
{
public:
	// Instance
	WindowModel();
	virtual ~WindowModel();

public:
	// Attributes
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
	
	void setCaption(const std::string& caption);
	std::string getCaption() const;
	
protected:
	std::string name;
	bool visible;
	std::string caption;

	int top;
	int left;
	int width;
	int height;
};

}

}

#endif // WINDOWMODEL_H
