#include"visitor.h"
#include"element.h"

using namespace visitor;

int main(void)
{
	Visitor *visA = new ConcreteVisitorA();
	Visitor *visB = new ConcreteVisitorB();
	Element *elm = new ConcreteElementA();

	elm->accept(visA);
	elm->accept(visB);

	return 0;
}
