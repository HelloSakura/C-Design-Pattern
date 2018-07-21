#include"memento.h"

using namespace memento;

memento::Memento::Memento(std::string state):
	m_state(state)
{
}

memento::Memento::~Memento()
{
}

std::string memento::Memento::getState()
{
	return this->m_state;
}

void memento::Memento::setState(std::string state)
{
	this->m_state = state;
}

memento::Caretaker::Caretaker()
{
}

memento::Caretaker::~Caretaker()
{
}

void memento::Caretaker::setMemento(Memento * pMemento)
{
	this->m_pMemento = pMemento;
}

Memento * memento::Caretaker::getMemento()
{
	return this->m_pMemento;
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
	this->m_state = "¸Ä±äÁË×´Ì¬";
}

std::string memento::Originator::getState()
{
	return this->m_state;
}

void memento::Originator::setState(std::string state)
{
	this->m_state = state;
}

Memento * memento::Originator::createMemento()
{
	return new Memento(this->m_state);
}

void memento::Originator::restoreMemento(Memento * pMto)
{
	this->m_state = pMto->getState();
}
