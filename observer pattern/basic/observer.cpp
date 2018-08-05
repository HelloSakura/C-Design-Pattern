#include"observer.h"
#include<iostream>

using namespace observer;

observer::Observer::Observer(std::string str):
	m_str(str)
{
}

observer::Observer::~Observer()
{
}

bool observer::Observer::operator==(const Observer & other)
{
	return m_str == other.m_str;
}

void observer::ConcreteObserver::update(Message & msg)
{
	if (msg.flag) {
		std::cout << "Observer "<<m_str<<":Get msg: " << msg.msg << std::endl;
	}
	else{
	std::cout << "Observer " << m_str << ": Old msg" << std::endl;
	}
}


