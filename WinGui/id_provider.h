#ifndef IDPROVIDER_H
#define IDPROVIDER_H

#include <memory>

namespace gui
{

class IdProvider
{
public:
	~IdProvider();

	static std::shared_ptr<IdProvider> getInstance();
	
protected:
	IdProvider();
	
public:
	int generateId();
	
protected:
	int counter;
};

}

#endif // IDPROVIDER_H
