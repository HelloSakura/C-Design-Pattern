#include<iostream>
#include"abstractFactory.h"

int main(void)
{
	AbstractFactory* f1 = new Factory1();
	AbstractFactory* f2 = new Factory2();

	AbstractProductA* a1 = f1->createProductA();
	AbstractProductB* b1 = f1->createProductB();

	AbstractProductA* a2 = f2->createProductA();
	AbstractProductB* b2 = f2->createProductB();

	return 0;
}