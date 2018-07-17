#ifndef _ABSRACTFACTORY_H_
#define _ABSRACTFACTORY_H_

class AbstractProductA;				//²úÆ·×å
class AbstractProductB;

class AbstractFactory
{
public:
	virtual ~AbstractFactory();
	virtual AbstractProductA* createProductA() = 0;
	virtual AbstractProductB* createProductB() = 0;

protected:
	AbstractFactory();

};


class Factory1 :public AbstractFactory
{
public:
	Factory1();
	~Factory1();

	virtual AbstractProductA* createProductA() override;
	virtual AbstractProductB* createProductB() override;

private:

};


class Factory2 :public AbstractFactory
{
public:
	Factory2();
	~Factory2();

	virtual AbstractProductA* createProductA() override;
	virtual AbstractProductB* createProductB() override;

private:

};

#endif // !_ABSRACTFACTORY_H_
