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

void visitor::ConcreteVisitorA::visitConcreteElementA(Element * elm)
{
	std::cout << "Concrete Visitor A: visit element A" << std::endl;
}

void visitor::ConcreteVisitorA::visitConcreteElementB(Element * elm)
{
	std::cout << "Concrete Visitor A: visit element B" << std::endl;
}

visitor::ConcreteVisitorB::ConcreteVisitorB()
{
}

visitor::ConcreteVisitorB::~ConcreteVisitorB()
{
}

void visitor::ConcreteVisitorB::visitConcreteElementA(Element * elm)
{
	std::cout << "Concrete Visitor B: visit element A" << std::endl;
}

void visitor::ConcreteVisitorB::visitConcreteElementB(Element * elm)
{
	std::cout << "COncrete Visitor B: visit element B" << std::endl;
}
