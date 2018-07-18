#include "adapter.h"
#include<iostream>

Target::Target()
{
}

Target::~Target()
{
}

Adaptee::Adaptee()
{
}

Adaptee::~Adaptee()
{
}

void Adaptee::SpecificRequest()
{
	std::cout << "I can solve the problem" << std::endl;
}

Adapter::Adapter()
{
}

Adapter::~Adapter()
{
}

void Adapter::Request()
{
	std::cout << "tranfer the adaptee by inherit" << std::endl;
	this->SpecificRequest();
}

AdapterObj::AdapterObj()
{
}

AdapterObj::AdapterObj(Adaptee * pAdt):
	_pAdt(pAdt)
{
}

AdapterObj::~AdapterObj()
{
}

void AdapterObj::Request()
{
	std::cout << "tranfer the adaptee by contain object" << std::endl;
	_pAdt->SpecificRequest();
}
