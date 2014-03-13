#include "font_model.h"

namespace gui
{

namespace model
{

FontModel::FontModel() :
	family_name( "Tahoma" ),
	font_size( 16 ),
	font_style( FONT_STYLE_NORMAL ),
	font_weight( 400 )
{
}

FontModel::~FontModel()
{
}

void FontModel::setName(const std::string& value) 
{
	name = value;
}

std::string FontModel::getName() const 
{
	return name;
}

std::string FontModel::getFamilyName() const 
{
	return family_name;
}

void FontModel::setFamilyName(const std::string& value) 
{
	family_name = value;
}

int FontModel::getFontSize() const 
{
	return font_size;
}

void FontModel::setFontSize(int value) 
{
	font_size = value;
}

FontModel::font_style_e FontModel::getFontStyle() const 
{
	return font_style;
}

void FontModel::setFontStyle(FontModel::font_style_e value) 
{
	font_style = value;
}

int FontModel::getFontWeight() const 
{
	return font_weight;
}

void FontModel::setFontWeight(int value) 
{
	font_weight = value;
}

}

}

