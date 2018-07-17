#include"factory.h"
#include"product.h"

int main(void)
{
	Factory *f = new ConcreteFactory();
	Product *p = f->createProduct();
	
	delete f;
	delete p;


	f = new AnotherFactory();
	p = f->createProduct();
	delete f;
	delete p;


	//int *t = f->createProduct<int>();
	return 0;
}