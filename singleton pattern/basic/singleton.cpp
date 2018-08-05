#include"singleton.h"
#include<iostream>
using namespace std;

//��ʼ��staticʵ�������ַ�ʽ���Ա�����߳��µľ���
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

