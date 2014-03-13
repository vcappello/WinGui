#ifndef FONTHANDLER_H
#define FONTHANDLER_H

#include <windows.h>

namespace gui
{

namespace handler
{

class FontHandler
{
public:
	FontHandler(HFONT h_font);
	virtual ~FontHandler();

	HFONT getHFont() const;
	
protected:
	HFONT h_font;
};

}

}

#endif // FONTHANDLER_H
