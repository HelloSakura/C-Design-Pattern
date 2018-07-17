#include"builder.h"
#include"director.h"

Diretor::Diretor(Builder *bld) :_bld(bld)
{

}

Diretor::~Diretor()
{

}

void Diretor::Construct()
{
	_bld->BuildPartA("user-defined a");
	_bld->BuildPartB("user-defined b");
	_bld->BuildPartC("user-defined c");
}
