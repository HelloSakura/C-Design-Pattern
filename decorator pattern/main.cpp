#include"decorator.h"
int main(void)
{
	Component *p = new ConcreteDecorator(new ConcreteComponent());
	p->operation();

	p = new ConcreteDecorator(p);
	p->operation();

	return 0;
}
