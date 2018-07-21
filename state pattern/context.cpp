#include"context.h"
#include"state.h"


using namespace state_t;


Context::Context():
	m_st(nullptr)
{
}

Context::Context(State* p_st):
	m_st(p_st)
{
}

Context::~Context()
{
}

void Context::operationInterface()
{
	m_st->operationInterface(this);
}

void Context::operationChangeState()
{
	m_st->operationChangeState(this);
}


bool Context::changeState(State* p_state)
{
	this->m_st = p_state;
	return true;
}
