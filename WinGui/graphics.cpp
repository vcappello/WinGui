#include "graphics.h"

namespace gui
{

Graphics::Graphics(HWND hWnd) :
	h_wnd( hWnd ),
	h_init_font( NULL )
{
}

Graphics::~Graphics()
{
	if (h_init_font != NULL)
		SelectObject (h_dc, h_init_font);
}

void Graphics::beginPaint()
{
	h_dc = BeginPaint(h_wnd, &paint_struct);
}

void Graphics::endPaint()
{
	EndPaint(h_wnd, &paint_struct);
}

void Graphics::drawText(int x, int y, const std::string& text)
{
	BOOL res = TextOut (h_dc, x, y, text.c_str(), text.length());
}

void Graphics::selectFont(std::shared_ptr<gui::handler::FontHandler> font)
{
	HFONT h_old_font = (HFONT)SelectObject (h_dc, font->getHFont());
	
	if (h_init_font == NULL)
		h_init_font = h_old_font;
}

}

