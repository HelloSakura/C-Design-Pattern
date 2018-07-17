#include"builder.h"
#include"product_b.h"

#include<iostream>

Builder::Builder()
{

}

Builder::~Builder()
{

}

ConcreteBuilder::ConcreteBuilder()
{

}

ConcreteBuilder::~ConcreteBuilder()
{

}

void ConcreteBuilder::BuildPartA(const std::string& part_s)
{
	std::cout << "step 1: build part a, " << part_s << std::endl;
}

void ConcreteBuilder::BuildPartB(const std::string& part_s)
{
	std::cout << "step 2: build part b, " << part_s << std::endl;
}

void ConcreteBuilder::BuildPartC(const std::string& part_s)
{
	std::cout << "step 3: build part c, " << part_s << std::endl;
}

Product* ConcreteBuilder::GetProduct()
{
	this->BuildPartA("pre-defined A");
	this->BuildPartB("pre-defined B");
	this->BuildPartC("pre-defined C");
	return new Product();
}