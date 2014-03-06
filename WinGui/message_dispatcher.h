#ifndef MESSAGEDISPATCHER_H
#define MESSAGEDISPATCHER_H

#include <memory>
#include <map>

#include <windows.h>

#include <controller/window_controller.h>
#include <controller/i_commandable.h>

namespace gui
{

class MessageDispatcher
{
public:
	// Instance
	~MessageDispatcher();

	static std::shared_ptr<MessageDispatcher> getInstance();
	
protected:
	MessageDispatcher();

public:
	// Methods
	void registerController(std::shared_ptr<controller::AbstractWindowedController> controller);
	void unregisterController(std::shared_ptr<controller::AbstractWindowedController> controller);
	
	LRESULT dispatchMessage(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	
	LRESULT dispatchCommand(WPARAM wParam, LPARAM lParam);
	
protected:
	std::map<HWND, std::shared_ptr<controller::AbstractWindowedController>> controller_map;
	std::map<int, std::shared_ptr<controller::AbstractWindowedController>> controller_cmd_map;

};

}

#endif // MESSAGEDISPATCHER_H
