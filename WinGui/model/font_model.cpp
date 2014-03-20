#include "font_model.h"

namespace gui
{

namespace model
{

FontModel::FontModel() :
	name_changed_event( new Event<>() ),
	family_name_changed_event( new Event<>() ),
	font_size_changed_event( new Event<>() ),
	font_style_changed_event( new Event<>() ),
	font_weight_changed_event( new Event<>() ),
	family_name( "Tahoma" ),
	font_size( 16 ),
	font_style( FontStyle::FONT_STYLE_NORMAL ),
	font_weight( 400 )
{
}

FontModel::~FontModel()
{
}

std::string FontModel::getName() const 
{
	return name;
}

void FontModel::setName(const std::string& value) 
{
	if (name != value)
	{
		name = value;
		name_changed_event->fire();
	}
}

std::string FontModel::getFamilyName() const 
{
	return family_name;
}

void FontModel::setFamilyName(const std::string& value) 
{
	if (family_name != value)
	{
		family_name = value;
		family_name_changed_event->fire();
	}
}

int FontModel::getFontSize() const 
{
	return font_size;
}

void FontModel::setFontSize(int value) 
{
	if (font_size != value)
	{
		font_size = value;
		font_size_changed_event->fire();
	}
}

FontModel::FontStyle FontModel::getFontStyle() const 
{
	return font_style;
}

void FontModel::setFontStyle(FontModel::FontStyle value) 
{
	if (font_style != value)
	{
		font_style = value;
		font_style_changed_event->fire();
	}
}

int FontModel::getFontWeight() const 
{
	return font_weight;
}

void FontModel::setFontWeight(int value) 
{
	if (font_weight != value)
	{
		font_weight = value;
		font_weight_changed_event->fire();
	}
}

}

}

