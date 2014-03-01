#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <string>
#include <memory>

#include <windows.h>

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
	
protected:
	HWND h_wnd;
	HDC hdc; 
	PAINTSTRUCT paint_struct;
};

}

#endif // GRAPHICS_H
