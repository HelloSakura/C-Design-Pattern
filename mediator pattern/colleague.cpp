#include"colleague.h"
#include"mediator.h"
#include<iostream>

using namespace mediator;

mediator::Colleague::~Colleague()
{
}

void mediator::Colleague::setMediator(Mediator * pMdt)
{
	this->m_pMdt = pMdt;
}

mediator::Colleague::Colleague()
{
}

void mediator::ConcreteColleagueA::sendMessage(std::string str)
{
	std::cout << "A send Message: ";
	m_pMdt->send(str, this);
}

void mediator::ConcreteColleagueA::getMessage(std::string str)
{
	std::cout << "A" << str << std::endl;
}

void mediator::ConcreteColleagueB::sendMessage(std::string str)
{
	std::cout << "B send Message: ";
	m_pMdt->send(str, this);
}

void mediator::ConcreteColleagueB::getMessage(std::string str)
{
	std::cout << "B" <<str << std::endl;
}

void mediator::ConcreteColleagueC::sendMessage(std::string str)
{
	std::cout << "C send Message: ";
	m_pMdt->send(str, this);
}

void mediator::ConcreteColleagueC::getMessage(std::string str)
{
	std::cout << "C" << str << std::endl;
}
