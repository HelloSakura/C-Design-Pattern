#include"proxy.h"

using namespace proxy;

int main(void)
{
	//通过t来充当p的代理，完成工作

	Subject *p = new Proxy();

	p->Request();


	return 0;
}
