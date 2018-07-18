#include"abstraction.h"
#include"implementor.h"

Abstraction::Abstraction()
{

}

Abstraction::Abstraction(Implementor* impl):
	_pImpl(impl)
{

}

Abstraction::~Abstraction()
{

}


RefinedAbstraction::~RefinedAbstraction()
{

}

void RefinedAbstraction::operation()
{
	this->_pImpl->doSomething();
}
