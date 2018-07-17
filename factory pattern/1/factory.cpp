#include"factory.h"
#include"product.h"

Factory::Factory()
{

}

Factory::~Factory()
{

}


ConcreteFactory::ConcreteFactory()
{

}

ConcreteFactory::~ConcreteFactory()
{

}


Product* ConcreteFactory::createProduct()
{
	return new ConcreteProduct();
}

AnotherFactory::AnotherFactory()
{

}

AnotherFactory::~AnotherFactory()
{

}

Product* AnotherFactory::createProduct()
{
	return new AnotherProduct();
}
