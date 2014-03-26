#ifndef ABSTRACTWINDOWEDCONTROLLER_H
#define ABSTRACTWINDOWEDCONTROLLER_H

#include <memory>

#include <windows.h>

#include <controller/i_controller.h>
#include <model/window_model.h>
#include <handler/font_handler.h>
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
	// IController properties
	std::string getName() const;
	void setName(const std::string& value);
	
	// IController properties Not implemented
	// virtual std::shared_ptr<model::IModelElement> getModelElement() const = 0;

	// AbstractWindowedController Properties
	HWND getHWnd() const;

	std::shared_ptr<gui::handler::FontHandler> getFontHandler();
	void setFontHandler(std::shared_ptr<gui::handler::FontHandler> value);
	
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
	void processPlaceableModel(std::shared_ptr<gui::model::IPlaceable> placeable);
	
protected:
	HWND h_wnd;
	std::shared_ptr<gui::handler::FontHandler> font_handler;
	
protected:
	paint_event_t paint_event;
	destroy_event_t destroy_event;
	std::string name;
};

}

}

#endif // ABSTRACTWINDOWEDCONTROLLER_H
