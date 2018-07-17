#include"product.h"
#include<iostream>
Product::Product()
{

}

Product::~Product()
{

}


ConcreteProduct::ConcreteProduct()
{
	std::cout << "Concrete Product" << std::endl;
}

ConcreteProduct::~ConcreteProduct()
{

}


AnotherProduct::AnotherProduct()
{
	std::cout << "Another Product" << std::endl;
}

AnotherProduct::~AnotherProduct()
{

}
