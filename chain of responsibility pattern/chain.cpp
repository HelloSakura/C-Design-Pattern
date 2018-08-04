#include"chain.h"
#include<iostream>

using namespace chain;

chain::Handler::Handler():m_handlerLever(10)
{
}

chain::Handler::~Handler()
{
}

void chain::Handler::setHandler(Handler * handler)
{
	this->m_handler = handler;
}

void chain::Handler::handlerRequest(Request * requset)
{
	if (requset->level < this->m_handlerLever) {
		std::cout << "Handler handler, solve the request" << std::endl;
	}
	else if (nullptr != m_handler) {
		std::cout << "can not solve the request, pass to the next handler" << std::endl;
		this->m_handler->handlerRequest(requset);
	}
	else {
		std::cout << "the next handler is volid, processor done!" << std::endl;
	}
}

chain::ConcreteHandlerA::ConcreteHandlerA()
{
	this->m_handlerLever = 100;
}

chain::ConcreteHandlerA::~ConcreteHandlerA()
{
}

void chain::ConcreteHandlerA::handlerRequest(Request * requset)
{
	if (requset->level < this->m_handlerLever) {
		std::cout << "Handler concrete handler A, solve the request" << std::endl;
	}
	else if (nullptr != m_handler) {
		std::cout << "can not solve the request, pass to the next handler" << std::endl;
		this->m_handler->handlerRequest(requset);
	}
	else {
		std::cout << "the next handler is volid, processor done!" << std::endl;
	}
}

chain::ConcreteHandlerB::ConcreteHandlerB()
{
	this->m_handlerLever = 1000;
}

chain::ConcreteHandlerB::~ConcreteHandlerB()
{
}

void chain::ConcreteHandlerB::handlerRequest(Request * requset)
{
	if (requset->level < this->m_handlerLever) {
		std::cout << "Handler concrete handler B, solve the request" << std::endl;
	}
	else if (nullptr != m_handler) {
		std::cout << "can not solve the request, pass to the next handler" << std::endl;
		this->m_handler->handlerRequest(requset);
	}
	else {
		std::cout << "the next handler is volid, processor done!" << std::endl;
	}
}