#ifndef ABSTRACTWINDOWEDCONTROLLER_H
#define ABSTRACTWINDOWEDCONTROLLER_H

#include <memory>

#include <windows.h>

#include <controller/i_controller.h>
#include <model/window_model.h>
#include <event.h>
#include <graphics.h>

namespace gui
{

namespace controller
{

class AbstractWindowedController : public IController
{
public:
	AbstractWindowedController(HWND hWnd);
	virtual ~AbstractWindowedController();

public:
	// Properties
	HWND getHWnd() const;
	
	// IController properties
	std::string getName() const;
	void setName(const std::string& value);
	
	// IController properties Not implemented
	// virtual std::shared_ptr<model::IModelElement> getModelElement() const = 0;

public:
	// Methods
	virtual void show();
	virtual void update();
	virtual void repaint();
	
public:
	// Events
	virtual bool fireSystemEvent(UINT message, WPARAM wParam, LPARAM lParam, LRESULT& lResult);

	typedef typename std::shared_ptr<Event<std::shared_ptr<Graphics>>> paint_event_t;
	virtual AbstractWindowedController::paint_event_t onPaintEvent() { return paint_event; }
	
	typedef typename std::shared_ptr<Event<>> destroy_event_t;
	virtual AbstractWindowedController::destroy_event_t onDestroyEvent() { return destroy_event; }
	
protected:
	HWND h_wnd;
	
protected:
	paint_event_t paint_event;
	destroy_event_t destroy_event;
	std::string name;
};

}

}

#endif // ABSTRACTWINDOWEDCONTROLLER_H
