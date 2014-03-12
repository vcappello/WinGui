#ifndef EDITMODEL_H
#define EDITMODEL_H

#include <string>

#include <model/control_base_model.h>

namespace gui
{

namespace model
{

class EditModel : public ControlBaseModel
{
public:
	EditModel();
	~EditModel();

public:
	void setText(const std::string& text);
	std::string getText() const;
	
protected:
	std::string text;
};

}

}

#endif // EDITMODEL_H
