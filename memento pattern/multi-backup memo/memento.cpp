#include"memento.h"

using namespace memento;

memento::IMemento::IMemento()
{
}

memento::IMemento::~IMemento()
{
}

memento::Caretaker::Caretaker()
{
}

memento::Caretaker::~Caretaker()
{
}

void memento::Caretaker::setMemento(day_type t_day, IMemento * pMemento)
{
	if (0 >= memo_map.count(t_day)) {
		memo_map.insert(std::pair<day_type, IMemento*>(t_day, pMemento));
	}
}

IMemento * memento::Caretaker::getMemento(day_type t_day)
{
	auto it = memo_map.find(t_day);

	if (it != memo_map.end()) {
		return (*it).second;
	}
	
	return nullptr;
}

memento::Originator::Memento::Memento(std::string state):
	m_state(state)
{
}

memento::Originator::Memento::~Memento()
{
}

std::string memento::Originator::Memento::getState()
{
	return this->m_state;
}

void memento::Originator::Memento::setState(std::string state)
{
	this->m_state = state;
}

memento::Originator::Originator(std::string state):
	m_state(state)
{
}

memento::Originator::~Originator()
{
}

void memento::Originator::changeState()
{
	this->m_state = "State has changed";
}

std::string memento::Originator::getState()
{
	return this->m_state;
}

void memento::Originator::setState(std::string state)
{
	this->m_state = state;
}

IMemento * memento::Originator::createMemento()
{
	return new Memento(this->m_state);
}

void memento::Originator::restoreMemento(IMemento * pMto)
{
	this->m_state = pMto->getState();
}
