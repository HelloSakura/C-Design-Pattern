#include"command.h"

using namespace command;

int main(void)
{
	Invoker* pInv = new Invoker();
	Receiver* pRev = new Receiver();
	Command* pCmd = new ConcreteCommand(pRev);

	pInv->setCommand(pCmd);
	pInv->action();
	

	return 0;
}
