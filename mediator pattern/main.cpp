#include"mediator.h"
#include"colleague.h"
#include<iostream>
#include<exception>

using namespace mediator;


int main(void)
{
	Mediator *mdt = new ConcreteMediator();
	
	Colleague *pA = new ConcreteColleagueA();
	pA->setMediator(mdt);
	mdt->setColleague(pA);


	Colleague *pB = new ConcreteColleagueB();
	pB->setMediator(mdt);
	mdt->setColleague(pB);

	Colleague *pC = new ConcreteColleagueC();
	pC->setMediator(mdt);
	mdt->setColleague(pC);


	pA->sendMessage("Hello");
	pB->sendMessage("Hi");
	pC->sendMessage("fxxk");
	

	return 0;
}
