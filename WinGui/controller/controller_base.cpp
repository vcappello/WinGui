#include "controller_base.h"

namespace gui
{

namespace controller
{

ControllerBase::ControllerBase(HWND hWnd) :
	h_wnd( hWnd ),
	paint_event( new Event<std::shared_ptr<Graphics>> ),
	destroy_event( new Event<>() )
{
}

ControllerBase::~ControllerBase()
{
}

HWND ControllerBase::getHWnd() const 
{
	return h_wnd;
}

void ControllerBase::show()
{
	ShowWindow (h_wnd, SW_SHOWNORMAL);
}

void ControllerBase::update()
{
	UpdateWindow (h_wnd);
}

bool ControllerBase::fireSystemEvent(UINT message, WPARAM wParam, LPARAM lParam, LRESULT& lResult)
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
	}
	
	return false;
}

}

}

