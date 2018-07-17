#include<iostream>
#include"builder.h"
#include"model.h"
#include"diretor.h"

//怎么感觉写成了工厂模式
int main(void)
{
	Director *d = new Director(new ConcreteBuilder());
	Model *m = d->getModel();

	m->doSomething();

	return 0;
}
