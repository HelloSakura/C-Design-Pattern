#include"visitor.h"
#include"element.h"
#include<iostream>


using namespace visitor;

visitor::Visitor::~Visitor()
{
}

visitor::Visitor::Visitor()
{
}

visitor::ConcreteVisitorA::ConcreteVisitorA()
{
}

visitor::ConcreteVisitorA::~ConcreteVisitorA()
{
}

void visitor::ConcreteVisitorA::visitConcreteElement(ConcreteElementA * elm)
{
	std::cout << "Visitor A: to solve concrete element A" << std::endl;
}

void visitor::ConcreteVisitorA::visitConcreteElement(ConcreteElementB * elm)
{
	std::cout << "Visitor A: to solve concrete element B" << std::endl;
}

visitor::ConcreteVisitorB::ConcreteVisitorB()
{
}

visitor::ConcreteVisitorB::~ConcreteVisitorB()
{
}

void visitor::ConcreteVisitorB::visitConcreteElement(ConcreteElementA * elm)
{
	std::cout << "Visitor B: to solve concrete element A" << std::endl;
}

void visitor::ConcreteVisitorB::visitConcreteElement(ConcreteElementB * elm)
{
	std::cout << "Visitor B: to solve concrete element B" << std::endl;
}
