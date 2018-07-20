#include"flyweight.h"
#include<string>

using namespace flyweight;

int main(void)
{

	std::string blue = "blue";
	std::string red = "red";
	
	FlyFactory* fc = new FlyFactory();
	Flyweight* p = fc->getFwtInstance(std::string("三角形"));
	p->setColor(blue);
	p->show();

	p = fc->getFwtInstance(std::string("正方形"));
	p->setColor(red);
	p->show();


	p = fc->getFwtInstance(std::string("圆形"));
	p->setColor(blue);
	p->show();


	p = fc->getFwtInstance(std::string("正方形"));
	p->show();


	return 0;
}
