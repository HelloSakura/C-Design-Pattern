#include"prototype.h"
#include<iostream>


Prototype::Prototype()
{

}

Prototype::~Prototype()
{

}

ConcretePrototype::ConcretePrototype()
{

}

ConcretePrototype::ConcretePrototype(const std::string& other, int num[], int t_size):
	str(other),
	array(num),
	size(t_size)
{

}

ConcretePrototype::ConcretePrototype(const ConcretePrototype& other)
{
	this->str = other.str;
	this->array = new int[other.size];
	this->size = other.size;
	memcpy(this->array, other.array, other.size * sizeof(int));
}

ConcretePrototype::~ConcretePrototype()
{
	if (nullptr != this->array) {
		delete[] this->array;
	}
}

Prototype* ConcretePrototype::Clone()
{
	ConcretePrototype *p = new ConcretePrototype(*this);
	return p;
}

void ConcretePrototype::show()
{
	std::cout << "Str: " << this->str << std::endl;
	std::cout << "array: ";
	
	for (int i = 0; i < this->size; ++i) {
		std::cout << this->array[i]<<" ";
	}

	std::cout << std::endl;
}

