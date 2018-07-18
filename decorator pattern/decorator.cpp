#include "decorator.h"
#include<iostream>

Component::Component()
{
}

Component::~Component()
{
}


void ConcreteComponent::operation()
{
	std::cout << "basic func of component" << std::endl;
}

Decorator::Decorator()
{

}

Decorator::Decorator(Component * pCpt):
	_pCpt(pCpt)
{

}

Decorator::~Decorator()
{
}

void Decorator::operation()
{
	_pCpt->operation();
}



void ConcreteDecorator::operation()
{
	_pCpt->operation();
	this->addFunc();
}

void ConcreteDecorator::addFunc()
{
	std::cout << "Decorator: add func to component" << std::endl;
}
