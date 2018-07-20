#include"proxy.h"

using namespace proxy;

int main(void)
{
	//通过t来充当p的代理，完成工作

	Subject* p = new RealSubject();
	Subject* t = new Proxy(p);

	t->Request();


	return 0;
}
