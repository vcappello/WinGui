#ifndef MESSAGEDISPATCHER_H
#define MESSAGEDISPATCHER_H

#include <memory>
#include <map>

#include <windows.h>

#include <controller/window_controller.h>

namespace gui
{

class MessageDispatcher
{
public:
	~MessageDispatcher();

	static std::shared_ptr<MessageDispatcher> getInstance();
	
protected:
	MessageDispatcher();

public:
	void registerController(std::shared_ptr<controller::WindowController> controller);
	void unregisterController(std::shared_ptr<controller::WindowController> controller);
	
	LRESULT dispatchMessage(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	
protected:
	std::map<HWND, std::shared_ptr<controller::WindowController>> controller_map;

};

}

#endif // MESSAGEDISPATCHER_H
