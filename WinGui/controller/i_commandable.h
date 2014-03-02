#ifndef ICOMMANDABLE_H
#define ICOMMANDABLE_H

#include <windows.h>

namespace gui
{

namespace controller
{

class ICommandable
{
public:
	ICommandable()
	{
	}
	virtual ~ICommandable()
	{
	}

public:
	virtual int getCommandId() const = 0;
	
public:	
	virtual void fireCommandEvent(WPARAM wParam, LPARAM lParam) = 0;
};

}

}

#endif // ICOMMANDABLE_H
