#include"strategy.h"
#include<iostream>
using namespace strategy;


int main(void)
{
	int a = 10, b = 9;
	Context *pCt1 = new Context(new ConcreteStrategyAdd());
	Context *pCt2 = new Context(new ConcreteStrategySub());

	std::cout << "strategy add:" << pCt1->doAction(a, b) << std::endl;
	std::cout << "strategy sub:" << pCt2->doAction(a, b) << std::endl;

	return 0;
}
