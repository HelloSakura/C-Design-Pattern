#include"prototype.h"


int main(void)
{
	int num[3] = { 1, 2, 3 };

	Prototype *p = new ConcretePrototype("Blueligh", num, sizeof(num)/sizeof(num[0]));

	Prototype *t = p->Clone();

	p->show();
	t->show();


	return 0;
}
