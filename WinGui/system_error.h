#ifndef SYSTEMERROR_H
#define SYSTEMERROR_H

#include <stdexcept>

#include <windows.h>

namespace gui
{

class SystemError : public std::runtime_error
{
public:
	SystemError(const std::string& msg);
	~SystemError() throw();

	static std::string getLastErrorMessage();
};

}

#endif // SYSTEMERROR_H
