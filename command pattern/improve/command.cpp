#include"command.h"
#include<iostream>

using namespace command;

command::Receiver::Receiver()
{
}

command::Receiver::~Receiver()
{
}


command::Command::~Command()
{
}

void command::Command::rollback()
{
}

command::Command::Command(Receiver* pRec):
	m_pRec(pRec)
{
}

command::ConcreteCommand::ConcreteCommand():
	Command(new ConcreteReceiver())
{
}

command::ConcreteCommand::~ConcreteCommand()
{
}

void command::ConcreteCommand::excute()
{
	m_pRec->action();
}

void command::ConcreteCommand::rollback()
{
	std::cout << "rollback to last statue" << std::endl;
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

void command::Invoker::rollback()
{
	m_pCmd->rollback();
}

command::ConcreteReceiver::ConcreteReceiver()
{
}

command::ConcreteReceiver::~ConcreteReceiver()
{
}

void command::ConcreteReceiver::action()
{
	std::cout << "Concrete Receiver: do something..." << std::endl;
}
