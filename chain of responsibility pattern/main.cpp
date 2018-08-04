#include"chain.h"

using namespace chain;

int main(void)
{
	Request * rqt = new Request();
	rqt->level = 98;

	Handler *h1 = new Handler();
	Handler *h2 = new ConcreteHandlerA();
	Handler *h3 = new ConcreteHandlerB();

	h1->setHandler(h2);
	h2->setHandler(h3);

	h1->handlerRequest(rqt);

	return 0;
}
