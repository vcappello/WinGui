#include "graphics.h"

namespace gui
{

Graphics::Graphics(HWND hWnd) :
	h_wnd( hWnd )
{
}

Graphics::~Graphics()
{
}

void Graphics::beginPaint()
{
	hdc = BeginPaint(h_wnd, &paint_struct);
}

void Graphics::endPaint()
{
	EndPaint(h_wnd, &paint_struct);
}

void Graphics::drawText(int x, int y, const std::string& text)
{
	BOOL res = TextOut (hdc, x, y, text.c_str(), text.length());
}

}

