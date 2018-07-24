#include"command.hpp"
#include<iostream>

int main(void)
{
	CommCommand<int> cmd;
	cmd.wrap([](int n) {return n + 1; }, 3);
	
	std::cout << "Command result: " << cmd.excute() << std::endl;

	return 0;
}
