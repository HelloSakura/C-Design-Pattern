#include"proxy.h"
#include<iostream>

using namespace proxy;

proxy::Subject::~Subject()
{
}

proxy::Subject::Subject()
{
}

proxy::Proxy::Proxy(Subject* pSbj)
{
	this->m_pSbj = pSbj;
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

Subject * proxy::Proxy::getProxy()
{
	return this;
}

RealSubject::RealSubject():
	m_proxy(nullptr)
{
	
}

RealSubject::~RealSubject()
{
}

void RealSubject::Request()
{
	if (nullptr != this->m_proxy) {
		std::cout << "RealSubject: processing commission" << std::endl;
	}
	else{
		std::cout << "please use the proxy" << std::endl;
	}
}

Subject *RealSubject::getProxy()
{
	if (nullptr == m_proxy) {
		m_proxy = new Proxy(this);
	}

	return m_proxy;
}

