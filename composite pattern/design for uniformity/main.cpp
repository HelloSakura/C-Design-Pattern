#include"composite.h"
#include<iostream>

using namespace composite;

int main(void)
{
	Component *pM = new Composite("班长");

	Component *pT1 = new Composite("组长1");
	Component *pT2 = new Composite("组长2");
	Component *pT3 = new Composite("组长3");
	Component *pT4 = new Composite("组长4");

	Component *pS1 = new Leaf("组员1");
	Component *pS2 = new Leaf("组员2");
	Component *pS3 = new Leaf("组员3");
	Component *pS4 = new Leaf("组员4");
	Component *pS5 = new Leaf("组员5");
	Component *pS6 = new Leaf("组员6");
	Component *pS7 = new Leaf("组员7");
	Component *pS8 = new Leaf("组员8");

	
	pM->add(pT1);
	pM->add(pT2);
	pM->add(pT3);
	pM->add(pT4);

	pT1->add(pS1);
	pT1->add(pS2);
	pT2->add(pS3);
	pT2->add(pS4);
	pT3->add(pS5);
	pT3->add(pS6);
	pT4->add(pS7);
	pT4->add(pS8);


	pM->Traversal();
	std::cout << std::endl;

	pT1->remove(pS1);
	pT3->remove(pS5);

	pM->Traversal();
	std::cout << std::endl;
	
	pM->remove(pT2);
	pM->Traversal();

	delete pM;

	return 0;
}
