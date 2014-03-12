#include "button_model.h"

namespace gui
{

namespace model
{

ButtonModel::ButtonModel()
{
}

ButtonModel::~ButtonModel()
{
}

void ButtonModel::setText(const std::string& text)
{
	this->text = text;
}

std::string ButtonModel::getText() const
{
	return text;
}	

}

}

