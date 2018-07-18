#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_

class Implementor;

class Abstraction
{
public:
	Abstraction(Implementor* pImpl);
	virtual ~Abstraction();
	virtual void operation() = 0;


protected:
	Abstraction();
	Implementor *_pImpl;

};

class RefinedAbstraction:public Abstraction
{
public:
	using Abstraction::Abstraction;
	~RefinedAbstraction();
	
	virtual void operation() override;

private:
	
};



#endif // !_ABSTRACTION_H_
