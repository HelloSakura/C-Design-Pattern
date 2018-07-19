#include"composite.h"
#include<iostream>

using namespace composite;

Component::Component(std::string str):
	_str(str)
{

}

Component::~Component()
{

}

void Component::operation()
{
	std::cout << "basic component object operation" << _str <<std::endl;
}

void Component::add(Component * child)
{
}

void Component::remove(Component * child)
{
}

Component * Component::getChild(int t)
{
	return nullptr;
}

bool Component::operator==(const Component & other)
{
	return this->_str == other._str;
}


Composite::~Composite()
{
	for (auto it = this->cpt_vec.begin(); it != cpt_vec.end(); ++it) {
		//提醒一下在堆上构造时注意子节点析构
		delete *it;
	}
}

void Composite::operation()
{
	std::cout << "composite object operatio" << _str << std::endl;
}

void Composite::add(Component * child)
{
	this->cpt_vec.push_back(child);
}

void Composite::remove(Component * child)
{
	for (auto it = cpt_vec.begin(); it != cpt_vec.end(); ++it) {
		if (child == *it) {
			cpt_vec.erase(it);
			break;
		}
	}
}

Component * Composite::getChild(int t)
{
	if (t < this->cpt_vec.size()) {
		return cpt_vec[t];
	}
	return nullptr;
}

void composite::Composite::Traversal()
{
	this->operation();
	for (auto it = this->cpt_vec.begin(); it != cpt_vec.end(); ++it) {
		(*it)->Traversal();
	}
}

void Leaf::operation()
{
	std::cout << "leaf obejcet operation" << _str << std::endl;
}

void composite::Leaf::Traversal()
{
	this->operation();
}
