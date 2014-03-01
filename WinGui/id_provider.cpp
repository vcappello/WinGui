#include "id_provider.h"

namespace gui
{

IdProvider::IdProvider() :
	counter( 100 )
{
}

IdProvider::~IdProvider()
{
}

std::shared_ptr<IdProvider> IdProvider::getInstance()
{
	static std::shared_ptr<IdProvider> instance;

	if (!instance)
		instance = std::shared_ptr<IdProvider>( new IdProvider() );

	return instance;
}

int IdProvider::generateId()
{
	return ++counter;
}

}

