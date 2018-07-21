#include"memento.h"
#include<iostream>

using namespace memento;


int main(void)
{
	Caretaker *p = new Caretaker();

	Originator *t = new Originator("活着");

	p->setMemento(t->createMemento());

	std::cout << "Before, " << "originator state: " << t->getState() << std::endl;

	t->changeState();
	std::cout << "Now, " << "originator state: " << t->getState() << std::endl;

	t->restoreMemento(p->getMemento());
	std::cout << "Recover, " << "originator state: " << t->getState() << std::endl;

	return 0;
}
