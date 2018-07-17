#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

/*
Diretor可以进行一下封装，返回各种不同的model
个人感觉是在工厂模式的基础上往上走了几步，至于区别感觉是在工厂模式在网上加一层封装
这层用于返回各种不同的model；model提供多种步骤方法来创建一个model，而build里面
通过组合这些方法，来创建出不同的model‘感觉model实际上是提供一个不同材料的类，而builder
使用这些材料来创建不同的对象，可以说一个model类提供所有的方法就行；多个builder的
子类来创建不同的model，而diretor来提供各种常用的builder创建出的model
*/
class Builder;
class Model;
class Director
{
public:
	Director(Builder* bld);
	~Director();
	void setBuilder(Builder* bld);
	Model* getModel();

private:
	Builder * _bld;
};
#endif // !_DIRECTOR_H_
