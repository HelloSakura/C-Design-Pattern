#include"element.h"
#include"visitor.h"
#include<iostream>

using namespace visitor;

visitor::Element::~Element()
{
}

visitor::Element::Element()
{
}

visitor::ConcreteElementA::ConcreteElementA()
{
}

visitor::ConcreteElementA::~ConcreteElementA()
{
}

void visitor::ConcreteElementA::accept(Visitor * vis)
{
	std::cout << "Element A: " << std::endl;
	vis->visitConcreteElement(this);
}

visitor::ConcreteElementB::ConcreteElementB()
{
}

visitor::ConcreteElementB::~ConcreteElementB()
{
}

void visitor::ConcreteElementB::accept(Visitor * vis)
{
	std::cout << "Element B: " << std::endl;
	vis->visitConcreteElement(this);
}
