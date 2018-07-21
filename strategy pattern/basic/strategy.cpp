#include"strategy.h"
using namespace strategy;

strategy::Context::Context(Strategy* pS):
	m_pS(pS)
{
}

strategy::Context::~Context()
{
}

int strategy::Context::doAction(int a, int b)
{
	return m_pS->algorithmInterface(a, b);
}

strategy::Strategy::~Strategy()
{
}

strategy::Strategy::Strategy()
{
}

strategy::ConcreteStrategyAdd::ConcreteStrategyAdd()
{
}

strategy::ConcreteStrategyAdd::~ConcreteStrategyAdd()
{
}

int strategy::ConcreteStrategyAdd::algorithmInterface(int a, int b)
{
	return a + b;
}

strategy::ConcreteStrategySub::ConcreteStrategySub()
{
}

strategy::ConcreteStrategySub::~ConcreteStrategySub()
{
}

int strategy::ConcreteStrategySub::algorithmInterface(int a, int b)
{
	return a - b;
}
