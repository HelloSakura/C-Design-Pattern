#include"observer.h"
#include"observable.h"
#include<iostream>

using namespace observer;


int main(void)
{
	Subject* p = new Subject();

	Observer* t1 = new ConcreteObserver("Sakura");
	Observer* t2 = new ConcreteObserver("Blueligh");
	Observer* t3 = new ConcreteObserver("Janus");

	std::cout << "First: " << std::endl;
	p->attach(*t1);
	p->doSomething();
	std::cout << std::endl;

	std::cout << "Second: " << std::endl;
	p->attach(*t2);
	p->doSomething();
	std::cout << std::endl;

	p->detach(*t1);
	std::cout << "Third: " << std::endl;
	p->doSomething();
	std::cout << std::endl;


	p->attach(*t3);
	std::cout << "Fourth: " << std::endl;
	p->doSomething();
	std::cout  << std::endl;

	return 0;
}
