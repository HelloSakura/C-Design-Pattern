#include"interpreter.h"
#include<iostream>

using namespace interpreter;

int main(void)
{
	string exp = "a+b-d+e";
	map<string, int> var;
	var["a"] = 4;
	var["b"] = 3;
	var["d"] = 2;
	var["e"] = 1;

	Calculator cal(exp);

	cout << "result: " <<exp <<" = "<< cal.run(var) <<endl;

	return 0;

}
 