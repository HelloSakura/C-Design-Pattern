#include"state.h"
#include"context.h"
using namespace state_t;

int main(void)
{
	int a = 10, b = 9;
	

	Context *p = new Context(ConcreteStateA::getInstance());
	p->operationChangeState();
	p->operationChangeState();
	p->operationChangeState();

	return 0;
}
