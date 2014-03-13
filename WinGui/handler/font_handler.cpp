#include "font_handler.h"

namespace gui
{

namespace handler
{

FontHandler::FontHandler(HFONT h_font) :
	h_font( h_font )
{
}

FontHandler::~FontHandler()
{
}

HFONT FontHandler::getHFont() const
{
	return h_font;
}

}

}

