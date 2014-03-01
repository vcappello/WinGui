#include "error.h"

namespace gui
{

Error::Error(const std::string& msg) :
	std::runtime_error( msg )
{
}

Error::~Error() throw ()
{
}


}

