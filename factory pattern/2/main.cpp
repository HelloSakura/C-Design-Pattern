#include"factory.h"
#include"product.h"

int main(void)
{
	Factory *f = new Factory();
	Product *p = f->createProduct<ConcreteProduct>();
	p = f->createProduct<AnotherProduct>();

	//int *t = f->createProduct<int>();
	return 0;
}