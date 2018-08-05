#ifndef _SINGLETON_H_
#define _SINGLETON_H_

class Singleton
{
public:
	~Singleton();
	void doSomething();
	static Singleton* getIninstance();

protected:
	Singleton();

private:
	static Singleton* p_single;

};


#endif // _SINGLETON_H_
