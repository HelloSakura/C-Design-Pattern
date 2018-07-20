#include"proxy.h"
#include<iostream>

using namespace proxy;

proxy::Subject::~Subject()
{
}

proxy::Subject::Subject()
{
}

proxy::Proxy::Proxy(Subject * pSbj):
	m_pSbj(pSbj)
{
}

proxy::Proxy::~Proxy()
{
}

void proxy::Proxy::Request()
{
	std::cout << "Proxy: delegate to the actual object" << std::endl;
	m_pSbj->Request();
}

proxy::RealSubject::RealSubject()
{
}

proxy::RealSubject::~RealSubject()
{
}

void proxy::RealSubject::Request()
{
	std::cout << "RealSubject: processing commission" << std::endl;
}
