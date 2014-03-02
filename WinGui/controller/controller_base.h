#ifndef CONTROLLERBASE_H
#define CONTROLLERBASE_H

#include <memory>

#include <windows.h>

#include <model/window_model.h>
#include <event.h>
#include <graphics.h>

namespace gui
{

namespace controller
{

class ControllerBase
{
public:
	ControllerBase(HWND hWnd);
	virtual ~ControllerBase();

public:
	// Properties
	HWND getHWnd() const;
	
	virtual std::shared_ptr<model::IModelElement> getModelElement() const = 0;

public:
	// Methods
	virtual void show();
	virtual void update();
	
public:
	// Events
	virtual bool fireSystemEvent(UINT message, WPARAM wParam, LPARAM lParam, LRESULT& lResult);

	typedef typename std::shared_ptr<Event<std::shared_ptr<Graphics>>> paint_event_t;
	virtual ControllerBase::paint_event_t onPaintEvent() { return paint_event; }
	
	typedef typename std::shared_ptr<Event<>> destroy_event_t;
	virtual ControllerBase::destroy_event_t onDestroyEvent() { return destroy_event; }
	
protected:
	HWND h_wnd;
	
protected:
	paint_event_t paint_event;
	destroy_event_t destroy_event;
};

}

}

#endif // CONTROLLERBASE_H
