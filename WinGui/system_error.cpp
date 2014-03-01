#include "system_error.h"

namespace gui
{

SystemError::SystemError(const std::string& msg) :
	std::runtime_error( msg )
{
}

SystemError::~SystemError() throw()
{
}

std::string SystemError::getLastErrorMessage()
{
	std::string err_message;

	DWORD error = GetLastError();

	LPTSTR error_text = NULL;

	FormatMessage(
	    FORMAT_MESSAGE_FROM_SYSTEM
	    | FORMAT_MESSAGE_ALLOCATE_BUFFER
	    | FORMAT_MESSAGE_IGNORE_INSERTS,
	    NULL,
	    error,
	    MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
	    (LPTSTR)&error_text,
	    0,
	    NULL);

	if (error_text != NULL) {
		err_message = error_text;

		// release memory allocated by FormatMessage()
		LocalFree(error_text);
		error_text = NULL;
	}

	return err_message;
}

}
