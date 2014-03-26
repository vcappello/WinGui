#include "font_factory.h"

namespace gui
{

namespace factory
{

void fontDeleter(gui::handler::FontHandler* ptr) 
{ 
	DeleteObject(ptr->getHFont());  
	delete ptr;          
};

FontFactory::FontFactory()
{
}

FontFactory::~FontFactory()
{
}

std::shared_ptr<gui::handler::FontHandler> FontFactory::create(std::shared_ptr<gui::model::FontModel> model)
{
	HFONT h_font = CreateFont(
						model->getFontSize(), 
						0,
						0,
						0,
						model->getFontWeight(),
						model->getFontStyle() == gui::model::FontModel::FontStyle::FONT_STYLE_ITALIC ? TRUE : FALSE,
						FALSE,
						FALSE,
						DEFAULT_CHARSET,
						OUT_OUTLINE_PRECIS,
						CLIP_DEFAULT_PRECIS,
						ANTIALIASED_QUALITY, 
						VARIABLE_PITCH,
						model->getFamilyName().c_str());
						
	std::shared_ptr<gui::handler::FontHandler> handler( new gui::handler::FontHandler( h_font ), fontDeleter );

	return handler;
}

}

}

