#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <string>
#include <memory>

#include <windows.h>

#include <handler/font_handler.h>

namespace gui
{

class Graphics
{
public:
	Graphics(HWND hWnd);
	~Graphics();

public:
	void beginPaint();
	void endPaint();
	
	void drawText(int x, int y, const std::string& text);

	void selectFont(std::shared_ptr<gui::handler::FontHandler> font);
	
protected:
	HWND h_wnd;
	HDC h_dc; 
	PAINTSTRUCT paint_struct;
	HFONT h_init_font;
};

}

#endif // GRAPHICS_H
