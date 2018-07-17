#ifndef _ABSTRACTPRODUCT_H_
#define _ABSTRACTPRODUCT_H_

class AbstractProductA
{
public:
	virtual ~AbstractProductA();

protected:
	AbstractProductA();
};


class ProductA1 :public AbstractProductA
{
public:
	ProductA1();

protected:
	~ProductA1();

};


class ProductA2 :public AbstractProductA
{
public:
	ProductA2();
	~ProductA2();
};


class AbstractProductB
{
public:
	virtual ~AbstractProductB();
	AbstractProductB();

};

class ProductB1 :public AbstractProductB
{
public:
	ProductB1();
	~ProductB1();

};


class ProductB2 :public AbstractProductB
{
public:
	ProductB2();
	~ProductB2();
};

#endif // !_ABSTRACTPRODUCT_H_
