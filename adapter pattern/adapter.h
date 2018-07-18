#ifndef _Adapter_H_
#define _Adapter_H_

class Target
{
public:
	Target();
	virtual ~Target();

	virtual void Request() = 0;

private:

};

class Adaptee
{
public:
	Adaptee();
	~Adaptee();

	void SpecificRequest();

private:

};

//ÀàÊÊÅäÆ÷
class Adapter: public Target, private Adaptee
{
public:
	Adapter();
	~Adapter();

	virtual void Request() override;

private:

};

//¶ÔÏóÊÊÅäÆ÷
class AdapterObj:public Target
{
public:
	AdapterObj();
	AdapterObj(Adaptee* pAdt);
	~AdapterObj();
	
	virtual void Request() override;

private:
	Adaptee * _pAdt;
};




#endif // !_Adapter_H_
