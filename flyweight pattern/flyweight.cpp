#include"flyweight.h"
#include<iostream>

using namespace flyweight;

flyweight::Flyweight::~Flyweight()
{
}

void flyweight::Flyweight::show()
{
	std::cout << "Graphics shape: " << m_shape << ", Color: " << m_color << std::endl;
}

flyweight::Flyweight::Flyweight(std::string shape):
	m_shape(shape)
{
}

void flyweight::ConcreteFlyweight::setColor(std::string& color)
{
	m_color = color;
}

std::string flyweight::ConcreteFlyweight::getShape()
{
	return m_shape;
}

flyweight::FlyFactory::FlyFactory()
{
}

flyweight::FlyFactory::~FlyFactory()
{
	for (auto it = fwt_vec.begin(); it != fwt_vec.end(); ++it){
		delete *it;
	}
}


Flyweight * FlyFactory::getFwtInstance(std::string& shape)
{
	for (auto it = fwt_vec.begin(); it != fwt_vec.end(); ++it) {
		if (shape == (*it)->getShape()) {
			std::cout << "already exist!" << std::endl;
			return (*it);
		}
	}

	std::cout << "create new!" << std::endl;
	Flyweight *t = new ConcreteFlyweight(shape);

	fwt_vec.push_back(t);

	return t;

	return nullptr;
}

Flyweight * FlyFactory::getFwtInstance(std::string && shape)
{
	return this->getFwtInstance(shape);
}
