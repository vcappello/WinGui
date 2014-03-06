#include "message_dispatcher.h"

namespace gui
{

MessageDispatcher::MessageDispatcher()
{
}

MessageDispatcher::~MessageDispatcher()
{
}

std::shared_ptr<MessageDispatcher> MessageDispatcher::getInstance()
{
	static std::shared_ptr<MessageDispatcher> instance;
	if (!instance)
		instance = std::shared_ptr<MessageDispatcher>( new MessageDispatcher() );

	return instance;
}

void MessageDispatcher::registerController(std::shared_ptr<controller::AbstractWindowedController> controller)
{
	controller_map.insert (std::make_pair (controller->getHWnd(), controller));
	
	std::shared_ptr<controller::ICommandable> commandable = std::dynamic_pointer_cast<controller::ICommandable>(controller);
	if (commandable)
		controller_cmd_map.insert (std::make_pair (commandable->getCommandId(), controller));
}

void MessageDispatcher::unregisterController(std::shared_ptr<controller::AbstractWindowedController> controller)
{
	controller_map.erase (controller->getHWnd());
	
	std::shared_ptr<controller::ICommandable> commandable = std::dynamic_pointer_cast<controller::ICommandable>(controller);;
	if (commandable)
		controller_cmd_map.erase (commandable->getCommandId());
}

LRESULT MessageDispatcher::dispatchMessage(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	try {
		auto controller_itor = controller_map.find (hWnd);
		if (controller_itor == controller_map.end())
			return DefWindowProc (hWnd, message, wParam, lParam);

		std::shared_ptr<controller::AbstractWindowedController> controller = controller_itor->second;
		LRESULT lResult = 0;
		if (!controller->fireSystemEvent (message, wParam, lParam, lResult))
			return DefWindowProc (hWnd, message, wParam, lParam);

		return lResult;
	} catch (std::exception& e) {
		
		std::string error_message = "An unhandled exception occurred.\n";
		error_message += e.what();
		
		int res = MessageBox(NULL,
		                     error_message.c_str(),
		                     "Unhandled exception",
		                     MB_ICONERROR | MB_RETRYCANCEL);

		if (res & IDRETRY)
			return DefWindowProc (hWnd, message, wParam, lParam);
		else
			exit (EXIT_FAILURE);
	}
}

LRESULT MessageDispatcher::dispatchCommand(WPARAM wParam, LPARAM lParam)
{
	try {
		int command_id = LOWORD(wParam);
		
		auto controller_itor = controller_cmd_map.find (command_id);
		if (controller_itor == controller_cmd_map.end())
			return 0;

		std::shared_ptr<controller::AbstractWindowedController> controller = controller_itor->second;
		std::shared_ptr<controller::ICommandable> commandable = std::dynamic_pointer_cast<controller::ICommandable>(controller);
		if (commandable)
			commandable->fireCommandEvent(wParam, lParam);

		return 0;
	} catch (std::exception& e) {
		
		std::string error_message = "An unhandled exception occurred.\n";
		error_message += e.what();
		
		int res = MessageBox(NULL,
		                     error_message.c_str(),
		                     "Unhandled exception",
		                     MB_ICONERROR | MB_RETRYCANCEL);

		if (res & IDRETRY)
			return 0;
		else
			exit (EXIT_FAILURE);
	}	
}

}

