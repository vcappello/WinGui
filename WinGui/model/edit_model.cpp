#include "edit_model.h"

namespace gui
{

namespace model
{

EditModel::EditModel() :
	text_changed_event( new Event<>() )
{
}

EditModel::~EditModel()
{
}

void EditModel::setText(const std::string& value)
{
	if (text != value)
	{
		text = value;
		text_changed_event->fire();
	}
}

std::string EditModel::getText() const
{
	return text;
}	

}

}

