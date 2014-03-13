#ifndef FONTMODEL_H
#define FONTMODEL_H

#include <string>

#include <model/i_model_element.h>

namespace gui
{

namespace model
{

class FontModel : public IModelElement
{
public:
	FontModel();
	~FontModel();

public:
	enum font_style_e {
	    FONT_STYLE_NORMAL,
	    FONT_STYLE_ITALIC
	};

public:
	void setName(const std::string& value);
	std::string getName() const;

	std::string getFamilyName() const;
	void setFamilyName(const std::string& value);
	
	int getFontSize() const;
	void setFontSize(int value);
	
	font_style_e getFontStyle() const;
	void setFontStyle(font_style_e value);
	
	int getFontWeight() const;
	void setFontWeight(int value);
	
protected:
	std::string name;
	
	std::string family_name;
	int font_size;
	font_style_e font_style;
	int font_weight;
};

}

}

#endif // FONTMODEL_H
