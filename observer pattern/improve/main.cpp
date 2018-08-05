#include"observer.hpp"
#include<iostream>


void print(int a, int b)
{
	std::cout << "func: a = " << a << ", " << "b = " << b << std::endl;
}

int main()
{
	auto f = [](int a, int b) {
		std::cout << "lambda: a = " << a << ", " << "b = " << b << std::endl;
	};

	Event<std::function<void(int, int)>> event;

	event.Connect(print);
	auto key = event.Connect(f);

	event.Notify(2, 3);
	event.Disconnect(key);

	event.Notify(1, 4);
	return 0;
}

