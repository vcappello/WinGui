#include "edit_model.h"

namespace gui
{

namespace model
{

EditModel::EditModel()
{
}

EditModel::~EditModel()
{
}

void EditModel::setText(const std::string& text)
{
	this->text = text;
}

std::string EditModel::getText() const
{
	return text;
}	

}

}

