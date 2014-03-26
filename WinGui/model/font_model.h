#ifndef FONTMODEL_H
#define FONTMODEL_H

#include <string>
#include <memory>

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

	void set(std::shared_ptr<FontModel> data);
	
public:
	// IModelElement events
	IModelElement::property_changed_event_t getNameChangedEvent() { return name_changed_event; }
			
	// FontModel events
	IModelElement::property_changed_event_t getFamilyNameChangedEvent() { return family_name_changed_event; }
	IModelElement::property_changed_event_t getFontSizeChangedEvent() { return font_size_changed_event; }
	IModelElement::property_changed_event_t getFontStyleChangedEvent() { return font_style_changed_event; }
	IModelElement::property_changed_event_t getFontWeightChangedEvent() { return font_weight_changed_event; }
	
public:
	bool operator== (const FontModel& rhs)
	{
		return family_name == rhs.getFamilyName() && 
			font_size == rhs.getFontSize() &&
			font_style == rhs.getFontStyle() &&
			font_weight == rhs.getFontWeight();
	}
	
	bool operator!= (const FontModel& rhs)
	{
		return family_name != rhs.getFamilyName() ||
			font_size != rhs.getFontSize() ||
			font_style != rhs.getFontStyle() ||
			font_weight != rhs.getFontWeight();
	}
	
protected:
	std::string name;		
	std::string family_name;
	int font_size;
	FontStyle font_style;
	int font_weight;
	
	IModelElement::property_changed_event_t name_changed_event;	
	IModelElement::property_changed_event_t family_name_changed_event;	
	IModelElement::property_changed_event_t font_size_changed_event;	
	IModelElement::property_changed_event_t font_style_changed_event;	
	IModelElement::property_changed_event_t font_weight_changed_event;	
};

}

}

#endif // FONTMODEL_H
