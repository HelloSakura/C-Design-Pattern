#include"template.h"
using namespace template_t;

int main(void)
{
	ConcreteClassA *p = new ConcreteClassA();
	ConcreteClassB *t = new ConcreteClassB();


	p->setHookFlag(true);
	p->templateMethod();

	t->templateMethod();
	return 0;
}
