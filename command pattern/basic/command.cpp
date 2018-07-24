#include"command.h"
#include<iostream>

using namespace command;

command::Receiver::Receiver()
{
}

command::Receiver::~Receiver()
{
}

void command::Receiver::action()
{
	std::cout << "Receiver: do something..." << std::endl;
}

command::Command::~Command()
{
}

command::Command::Command()
{
}

command::ConcreteCommand::ConcreteCommand(Receiver * pRec):
	m_pRec(pRec)
{
}

command::ConcreteCommand::~ConcreteCommand()
{
}

void command::ConcreteCommand::excute()
{
	m_pRec->action();
}

command::Invoker::Invoker()
{
}

command::Invoker::~Invoker()
{
}

void command::Invoker::setCommand(Command * pCmd)
{
	this->m_pCmd = pCmd;
}

void command::Invoker::action()
{
	m_pCmd->excute();
}
