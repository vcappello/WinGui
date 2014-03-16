#include "application.h"

namespace gui
{

Application::Application()
{
}

Application::~Application()
{
}

std::shared_ptr<Application> Application::getInstance()
{
	static std::shared_ptr<Application> instance;
	if (!instance)
		instance = std::shared_ptr<Application>( new Application() );
		
	return instance;
}

void Application::startup(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	this->hInstance		= hInstance;
	this->hPrevInstance = hPrevInstance;
	this->lpCmdLine		= lpCmdLine;
	this->nCmdShow		= nCmdShow;
}

void Application::run()
{
    // Main message loop:
    MSG msg;
    while (GetMessage (&msg, NULL, 0, 0))
    {
		HWND hwnd = GetForegroundWindow();
		if(hwnd == NULL || !IsDialogMessage (hwnd, &msg))
		{		
			TranslateMessage (&msg);
			DispatchMessage (&msg);
		}
    }	
}

void Application::quit(int exit_code)
{
	PostQuitMessage(exit_code);
}

HINSTANCE Application::getHInstance()
{
	return hInstance;
}

int Application::getNCmdShow()
{
	return nCmdShow;
}

}


