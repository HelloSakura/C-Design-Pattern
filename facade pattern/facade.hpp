#ifndef _FACADE_H_
#define _FACADE_H_

#include<iostream>

namespace facade {


	class ClassA
	{
	public:
		ClassA() {}
		~ClassA() {}

		void doSthA() { std::cout << "do something A" << std::endl; }

	private:

	};


	class ClassB
	{
	public:
		ClassB() {}
		~ClassB() {}

		void doSthB() { std::cout << "do something B" << std::endl; }

	private:

	};


	class ClassC
	{
	public:
		ClassC() {}
		~ClassC() {}

		void doSthC() { std::cout << "do something C" << std::endl; }

	private:

	};



	class Facade
	{
	public:
		Facade(){}
		~Facade(){}

		void funcA() {
			ClassA a;
			std::cout << "Facade func A:" << std::endl;
			a.doSthA();
		}

		void funcB() {
			ClassB b;
			ClassC c;

			std::cout << "Facade func B:" << std::endl;
			b.doSthB();
			c.doSthC();
		}

	private:

	};


}
#endif // !_FACADE_H_
