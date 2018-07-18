#ifndef _DECORATOR_H_
#define _DECORATOR_H_

class Component
{
public:
	virtual ~Component();

	virtual void operation() = 0;


protected:
	Component();

};


class ConcreteComponent:public Component
{
public:
	using Component::Component;

	virtual void operation() override;


private:

};


class Decorator:public Component
{
public:
	Decorator();
	Decorator(Component* pCpt);
	~Decorator();

	virtual void operation() override;
	virtual void addFunc() = 0;

protected:
	Component * _pCpt;
};

class ConcreteDecorator:public Decorator
{
public:
	using Decorator::Decorator;

	virtual void operation() override;
	virtual void addFunc() override;

private:

};

#endif // !_DECORATOR_H_
