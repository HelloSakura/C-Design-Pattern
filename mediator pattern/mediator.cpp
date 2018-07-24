#include"mediator.h"
#include"colleague.h"
#include<typeinfo>
#include<iostream>

using namespace mediator;

mediator::Mediator::~Mediator()
{
}

mediator::Mediator::Mediator()
{
}

mediator::ConcreteMediator::ConcreteMediator()
{
}

mediator::ConcreteMediator::~ConcreteMediator()
{
}

void mediator::ConcreteMediator::setColleague(Colleague * pClg)
{
	//���������������ķ�ʽ���趨����ָ��

	const static char* c1 = typeid(ConcreteColleagueA).name();
	const static char* c2 = typeid(ConcreteColleagueB).name();
	const static char* c3 = typeid(ConcreteColleagueC).name();


	if (c1 == typeid(*pClg).name()) {			//������ConcreteColleagueA����
		this->m_pClgA = pClg;
	}
	else if (c2 == typeid(*pClg).name()) {		//������ConcreteColleagueB����
		this->m_pClgB = pClg;
	}
	else if (c3 == typeid(*pClg).name()) {			//������ConcreteColleagueC����
		this->m_pClgC = pClg;
	}
	else {
		throw "run-time type information solve failed!";
	}
}

void mediator::ConcreteMediator::send(std::string str, Colleague * pClg)
{
	std::cout << " mediator tranfer msg to" << std::endl;
	if (pClg == m_pClgA) {
		m_pClgB->getMessage(std::string(" Get message from A"));
	}
	else if(pClg == m_pClgB){
		m_pClgC->getMessage(std::string(" Get message from B"));
	}
	else if (pClg == m_pClgC){
		m_pClgA->getMessage(std::string(" Get message from C"));
	}
	else{
		throw "can not find the receiver";
	}

}


