#include "abstract_windowed_controller.h"

#include <message_dispatcher.h>

namespace gui
{

namespace controller
{

AbstractWindowedController::AbstractWindowedController(HWND hWnd) :
	h_wnd( hWnd ),
	paint_event( new Event<std::shared_ptr<Graphics>> ),
	destroy_event( new Event<>() )
{
}

AbstractWindowedController::~AbstractWindowedController()
{
}

std::string AbstractWindowedController::getName() const
{
	return name;
}

void AbstractWindowedController::setName(const std::string& value)
{
	name = value;
}

HWND AbstractWindowedController::getHWnd() const 
{
	return h_wnd;
}

std::shared_ptr<gui::handler::FontHandler> AbstractWindowedController::getFontHandler()
{
	return font_handler;
}

void AbstractWindowedController::setFontHandler(std::shared_ptr<gui::handler::FontHandler> value)
{	
	font_handler = value;
	
	SendMessage(h_wnd, WM_SETFONT, (WPARAM)font_handler->getHFont(), TRUE);
}

void AbstractWindowedController::show()
{
	ShowWindow (h_wnd, SW_SHOWNORMAL);
}

void AbstractWindowedController::update()
{
	UpdateWindow (h_wnd);
}

void AbstractWindowedController::repaint()
{
	InvalidateRect (h_wnd, NULL, TRUE);
}

bool AbstractWindowedController::fireSystemEvent(UINT message, WPARAM wParam, LPARAM lParam, LRESULT& lResult)
{
	switch (message)
	{
		case WM_PAINT:
		{
			std::shared_ptr<Graphics> graphics = std::shared_ptr<Graphics>( new Graphics(h_wnd) );
			if (paint_event->hasSubscriptions())
			{
				paint_event->fire (graphics);
				return true;
			}
			break;
		}
		case WM_DESTROY:
		{
			if (destroy_event->hasSubscriptions());
			{
				destroy_event->fire();
				return true;
			}
			break;
		}
		case WM_COMMAND:
		{
			MessageDispatcher::getInstance()->dispatchCommand (wParam, lParam);
			break;
		}
	}
	
	return false;
}

}

}

