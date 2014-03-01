#ifndef WINDOWMODEL_H
#define WINDOWMODEL_H

#include <string>
#include <list>
#include <memory>

#include <windows.h>

#include <model/i_model_element.h>
#include <error.h>

namespace gui
{

namespace model
{

class WindowModel : public IModelElement
{
public:
	WindowModel();
	virtual ~WindowModel();

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
	
	void setCaption(const std::string& caption);
	std::string getCaption() const;
	
public:
	void add(std::shared_ptr<IModelElement> child);
	void erase(const std::string& name);
	std::shared_ptr<IModelElement> get(const std::string& name);
	
	typedef std::list<std::shared_ptr<IModelElement>> children_t;
	typedef children_t::iterator iterator_t;
	iterator_t childrenBegin();
	iterator_t childrenEnd();
	
protected:
	std::string name;
	bool visible;
	std::string caption;

	int top;
	int left;
	int width;
	int height;

	children_t children;
};

}

}

#endif // WINDOWMODEL_H
