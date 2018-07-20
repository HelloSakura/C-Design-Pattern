#include"proxy.h"

using namespace proxy;

int main(void)
{
	//不需要知道代理的真实对象是谁，对于真实角色的修改则在设计上已经决定了

	Subject *t = new RealSubject();
	Subject *p = new Proxy(t);

	//无法使用代理
	p->Request();

	//代理必须通过具体对象获得
	p = t->getProxy();
	p->Request();


	return 0;
}
