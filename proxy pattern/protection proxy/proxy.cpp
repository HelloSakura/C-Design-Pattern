#include"proxy.h"
#include<iostream>

using namespace proxy;

proxy::Subject::~Subject()
{
}

proxy::Subject::Subject()
{
}

proxy::Proxy::Proxy()
{
	m_pSbj = new RealSubject(this);
}

proxy::Proxy::~Proxy()
{
	delete m_pSbj;
}

void proxy::Proxy::Request()
{
	std::cout << "Proxy: delegate to the actual object" << std::endl;
	m_pSbj->Request();
}

proxy::RealSubject::RealSubject(Subject* pSbj)
{
	if (nullptr == pSbj) {
		throw "can not create object";
	}
	else {
		//initialize
	}


}

proxy::RealSubject::~RealSubject()
{
}

void proxy::RealSubject::Request()
{
	std::cout << "RealSubject: processing commission" << std::endl;
}

