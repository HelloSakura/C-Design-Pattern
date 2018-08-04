#include"visitor.h"
#include"element.h"

using namespace visitor;

int main(void)
{
	Visitor *visA = new ConcreteVisitorA();
	Visitor *visB = new ConcreteVisitorB();
	Element *elmA = new ConcreteElementA();
	Element *elmB = new ConcreteElementB();


	elmA->accept(visA);
	elmA->accept(visB);
	elmB->accept(visA);
	elmB->accept(visB);

	return 0;
}
