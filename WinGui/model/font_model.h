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
	void setFamilyName(const std::string& family_name) {
		this->family_name = family_name;
	}
	void setFontSize(int font_size) {
		this->font_size = font_size;
	}
	void setFontStyle(const font_style_e& font_style) {
		this->font_style = font_style;
	}
	void setFontWeight(int font_weight) {
		this->font_weight = font_weight;
	}
	const std::string& getFamilyName() const {
		return family_name;
	}
	int getFontSize() const {
		return font_size;
	}
	const font_style_e& getFontStyle() const {
		return font_style;
	}
	int getFontWeight() const {
		return font_weight;
	}
protected:
	std::string family_name;
	int font_size;
	font_style_e font_style;
	int font_weight;
};

}

}

#endif // FONTMODEL_H
