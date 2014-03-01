#ifndef APPLICATION_H
#define APPLICATION_H

#include <memory>

#include <windows.h>

namespace gui
{

class Application
{
public:
	~Application();

	static std::shared_ptr<Application> getInstance();
	
public:
	void startup(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
	void run();
	void quit(int exit_code = 0);

public:	
	HINSTANCE getHInstance();
	int getNCmdShow();
	
protected:
	Application();
	
protected:
	HINSTANCE 	hInstance;
	HINSTANCE 	hPrevInstance;
	LPSTR 		lpCmdLine;
	int 		nCmdShow;
};

}

#endif // APPLICATION_H
