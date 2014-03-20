#include "button_model.h"

namespace gui
{

namespace model
{

ButtonModel::ButtonModel() :
	text_changed_event( new Event<>() )
{
}

ButtonModel::~ButtonModel()
{
}

void ButtonModel::setText(const std::string& value)
{
	if (text != value)
	{
		text = value;
		text_changed_event->fire();
	}
}

std::string ButtonModel::getText() const
{
	return text;
}	

}

}

