#ifndef BUTTONMODEL_H
#define BUTTONMODEL_H

#include <string>

#include <model/control_base_model.h>

namespace gui
{

namespace model
{

class ButtonModel : public ControlBaseModel
{
public:
	ButtonModel();
	virtual ~ButtonModel();

public:
	void setText(const std::string& text);
	std::string getText() const;
	
protected:
	std::string text;
};

}

}

#endif // BUTTONMODEL_H
