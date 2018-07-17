#include"singleton.h"
#include<iostream>
using namespace std;

//初始化static实例，此种方式可以避免多线程下的竞争
Singleton* Singleton::p_single = new Singleton();

Singleton::Singleton()
{

}

Singleton::~Singleton()
{

}

void Singleton::doSomething()
{
	cout << "do some thing" << endl;
}



Singleton* Singleton::getIninstance()
{
	if (nullptr == p_single) {
		throw R"(Singleton create failed!)";
		return nullptr;
	}
	else
	{
		return p_single;
	} 
}

