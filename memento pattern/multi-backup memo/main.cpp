#pragma warning(disable : 4996)

#include"memento.h"
#include<ctime>
#include<iomanip>
#include<iostream>
#include<Windows.h>


using namespace memento;
using namespace std::chrono;

int main(void)
{
	Caretaker *p = new Caretaker();
	Originator *t = new Originator("state_A");

	day_type d1 = time_point_cast<days_type>(system_clock::now());
	std::time_t t1 = system_clock::to_time_t(d1);
	p->setMemento(d1, t->createMemento());
	std::cout << "Before, the state: " << t->getState() << std::endl;
	std::cout << std::endl;

	t->changeState();
	std::cout << "Now change State, the state: " << t->getState() << std::endl;
	
	
	//Sleep for 3 seconds
	Sleep(3000);


	t->setState("state_B");
	std::cout << "Now Set State, the state: " << t->getState() << std::endl;
	day_type d2 = time_point_cast<days_type>(system_clock::now());
	std::time_t t2 = system_clock::to_time_t(d2);
	p->setMemento(d2, t->createMemento());

	if (d1 == d2) {
		std::cout << "fxxk" << std::endl;
	}

	t->restoreMemento(p->getMemento(d1));
	std::cout << "Restore state at time point " << std::put_time(std::localtime(&t1), "%F %T") << ", the state: " << t->getState() << std::endl;

	t->restoreMemento(p->getMemento(d2));
	std::cout << "Restore state at time point " << std::put_time(std::localtime(&t2), "%F %T") << ", the state: " << t->getState() << std::endl;

	return 0;
}
