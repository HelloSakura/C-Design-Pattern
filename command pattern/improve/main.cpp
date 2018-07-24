#include"command.h"
#include<iostream>

using namespace command;

int main(void)
{
	//每一个指令对应一个具体的receiver，对命令模式做了一层封装，客户只需要发布命令即可，至于
	//如何执行，完全不用管。 同时每个命令都实现了对自己的任务进行回滚，再出现问题时，可以进行任务回滚

	Invoker *pInv = new Invoker();
	Command *pCmd = new ConcreteCommand();

	pInv->setCommand(pCmd);
	pInv->action();
	pInv->rollback();

	return 0;
}
