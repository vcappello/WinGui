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
	enum class FontStyle {
	    FONT_STYLE_NORMAL,
	    FONT_STYLE_ITALIC
	};

public:
	// IModelElement Attributes
	void setName(const std::string& value);
	std::string getName() const;

	// FontModel Attributes
	std::string getFamilyName() const;
	void setFamilyName(const std::string& value);
	
	int getFontSize() const;
	void setFontSize(int value);
	
	FontStyle getFontStyle() const;
	void setFontStyle(FontStyle value);
	
	int getFontWeight() const;
	void setFontWeight(int value);


public:
	// IModelElement events
	IModelElement::property_changed_event_t getPropertyChangedEvent() { return property_changed_event; }
			
protected:
	std::string name;
	IModelElement::property_changed_event_t property_changed_event;
		
	std::string family_name;
	int font_size;
	FontStyle font_style;
	int font_weight;
};

}

}

#endif // FONTMODEL_H
