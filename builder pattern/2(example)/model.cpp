#include"model.h"
#include<iostream>

Model::Model()
{

}

Model::~Model()
{

}

ConcreteModel::ConcreteModel()
{

}

ConcreteModel::~ConcreteModel()
{

}

void ConcreteModel::StepOne(const string& s)
{
	this->s_vec.push_back(s);
}

void ConcreteModel::StepTwo(const string& s)
{
	this->s_vec.push_back(s);
}

void ConcreteModel::StepThree(const string& s)
{
	this->s_vec.push_back(s);
}

void ConcreteModel::doSomething()
{
	for (auto it = s_vec.begin(); it != s_vec.end(); ++it) {
		std::cout << *it << " ";
	}

	std::cout << std::endl;

}
