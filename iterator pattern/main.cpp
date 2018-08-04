#include"iterator.hpp"
#include<iostream>

using namespace iterator;

int main(void)
{
	Aggregate<int> *pAgt = new ConcreteAggregate<int>();
	auto it = pAgt->createIterator();

	for (it->first(); !it->isDone(); it->next()) {
		std::cout << "access to " << *(it->currentItem()) << std::endl;
	}
	
	delete it;
	delete pAgt;

	return 0;
}
