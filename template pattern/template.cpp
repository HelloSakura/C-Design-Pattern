#include"template.h"
#include<iostream>

using namespace template_t;

template_t::AbstractClass::AbstractClass()
{
}

template_t::AbstractClass::~AbstractClass()
{
}

void template_t::AbstractClass::templateMethod()
{
	if (hookFunc()) {
		std::cout << "hook func excute" << std::endl;
		this->doFuncA();
	}

	this->doFuncB();
}

void template_t::ConcreteClassA::setHookFlag(bool hookFlag)
{
	this->m_hookFlag = hookFlag;
}

void template_t::ConcreteClassA::doFuncA()
{
	std::cout << "Conctrete Class A excute funcA" << std::endl;
}

void template_t::ConcreteClassA::doFuncB()
{
	std::cout << "Conctrete Class A excute funcB" << std::endl;
}

bool template_t::ConcreteClassA::hookFunc()
{
	return m_hookFlag;
}

void template_t::ConcreteClassB::doFuncA()
{
	std::cout << "Conctrete Class B excute funcA" << std::endl;
}

void template_t::ConcreteClassB::doFuncB()
{
	std::cout << "Conctrete Class B excute funcB" << std::endl;
}

bool template_t::ConcreteClassB::hookFunc()
{
	return false;
}
