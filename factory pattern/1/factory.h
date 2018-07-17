#ifndef _FACTORY_H_
#define _FACTORY_H_

class Product;

class Factory
{
public:
	virtual ~Factory();
	virtual Product* createProduct() = 0;

protected:
	Factory();
};


class ConcreteFactory: public Factory
{
public:
	ConcreteFactory();
	~ConcreteFactory();
	Product* createProduct();

private:

};

class AnotherFactory : public Factory
{
public:
	AnotherFactory();
	~AnotherFactory();
	Product* createProduct();

private:

};

#endif // !_FACTORY_HPP_
