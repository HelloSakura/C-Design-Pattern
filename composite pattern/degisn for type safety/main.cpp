#include"composite.h"
#include<iostream>

using namespace composite;

int main(void)
{
	Composite *pM = new Composite("班长");

	Composite *pT1 = new Composite("组长1");
	Composite *pT2 = new Composite("组长2");
	Composite *pT3 = new Composite("组长3");
	Composite *pT4 = new Composite("组长4");

	Leaf *pS1 = new Leaf("组员1");
	Leaf *pS2 = new Leaf("组员2");
	Leaf *pS3 = new Leaf("组员3");
	Leaf *pS4 = new Leaf("组员4");
	Leaf *pS5 = new Leaf("组员5");
	Leaf *pS6 = new Leaf("组员6");
	Leaf *pS7 = new Leaf("组员7");
	Leaf *pS8 = new Leaf("组员8");

	
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
