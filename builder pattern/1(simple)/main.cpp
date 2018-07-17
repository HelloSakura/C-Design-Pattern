#include<iostream>
#include"builder.h"
#include"product_b.h"
#include"director.h"

int main(void)
{
	Diretor* d = new Diretor(new ConcreteBuilder());
	d->Construct();

	return 0;
}
