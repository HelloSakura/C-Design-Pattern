#include<iostream>
#include"abstractFactory.h"
#include"abstractProduct.h"

using namespace std;

AbstractFactory::AbstractFactory()
{

}

AbstractFactory::~AbstractFactory()
{

}

Factory1::Factory1()
{

}

Factory1::~Factory1()
{

}

AbstractProductA* Factory1::createProductA()
{
	return new ProductA1();
}

AbstractProductB* Factory1::createProductB()
{
	return new ProductB1();
}

Factory2::Factory2()
{

}

Factory2::~Factory2()
{

}

AbstractProductA* Factory2::createProductA()
{
	return new ProductA2();
}

AbstractProductB* Factory2::createProductB()
{
	return new ProductB2();
}
