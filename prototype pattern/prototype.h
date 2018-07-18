#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_

#include<string>

class Prototype
{
public:
	virtual ~Prototype();
	virtual Prototype* Clone() = 0;

	virtual void show() = 0;

protected:
	Prototype();
};

class ConcretePrototype: public Prototype
{
public:
	ConcretePrototype();
	ConcretePrototype(const std::string& other, int num[], int t_size);
	ConcretePrototype(const ConcretePrototype& other);				//◊¢“‚…Ó«≥øΩ±¥
	~ConcretePrototype();

	virtual Prototype* Clone() override;
	virtual void show() override;
private:
	std::string str;
	int* array;
	int size;
};



#endif // !_PROTOTYPE_H_
