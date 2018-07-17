#include<iostream>
#include"singleton.h"

int main(void)
{
	Singleton *p = Singleton::getIninstance();
	p->doSomething();

	return 0;
}