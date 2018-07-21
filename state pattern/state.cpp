#include"state.h"
#include"context.h"
#include<iostream>


using namespace state_t;


state_t::State::State()
{
}

state_t::State::~State()
{
}

bool state_t::State::changeState(Context * con, State * st)
{
	con->changeState(st);
	return true;
}

//concrete state A
state_t::State* ConcreteStateA::p_st = new ConcreteStateA();

state_t::ConcreteStateA::ConcreteStateA()
{
}

state_t::ConcreteStateA::~ConcreteStateA()
{
}

void state_t::ConcreteStateA::operationInterface(Context * t_context)
{
	std::cout << "Status A: do..." << std::endl;
	
}

void state_t::ConcreteStateA::operationChangeState(Context * t_context)
{
	
	std::cout << "Change state to B" << std::endl;
	operationInterface(t_context);
	changeState(t_context, ConcreteStateB::getInstance());
}

state_t::State * state_t::ConcreteStateA::getInstance()
{
	return p_st;
}


//concrete state B
state_t::State* ConcreteStateB::p_st = new ConcreteStateB();

state_t::ConcreteStateB::ConcreteStateB()
{
}

state_t::ConcreteStateB::~ConcreteStateB()
{
}

void state_t::ConcreteStateB::operationInterface(Context * t_context)
{
	std::cout << "Status B: do..." << std::endl;
}

void state_t::ConcreteStateB::operationChangeState(Context * t_context)
{
	std::cout << "Change state to A" << std::endl;
	operationInterface(t_context);
	changeState(t_context, ConcreteStateA::getInstance());
}

state_t::State * state_t::ConcreteStateB::getInstance()
{
	return p_st;
}
