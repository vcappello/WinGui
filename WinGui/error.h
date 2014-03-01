#ifndef ERROR_H
#define ERROR_H

#include <stdexcept>

namespace gui
{

class Error : public std::runtime_error
{
public:
	Error(const std::string& msg);
	~Error() throw ();
};

}

#endif // ERROR_H
