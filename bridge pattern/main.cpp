#include"abstraction.h"
#include"implementor.h"


int main(void)
{
	Abstraction *p = new RefinedAbstraction(new Implementor());
	p->operation();


	return 0;
}
