#include"template.hpp"

struct Test
{
	Test(double, double)
	{}
};

int main()
{
	Singleton<Test>::Instance(1.2, 1.3);
	auto t = Singleton<Test>::GetInstance();

	return 0;
}

