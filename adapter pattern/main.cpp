#include"adapter.h"

int main(void)
{
	//类继承适配
	Target *p = new Adapter();
	p->Request();


	//对象适配
	p = new AdapterObj(new Adaptee());
	p->Request();

	return 0;
}
