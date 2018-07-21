#ifndef _MEMENTO_H_
#define _MEMENTO_H_
#include<string>


namespace memento {
	class Memento
	{
	public:
		Memento(std::string state);
		~Memento();

		std::string getState();
		void setState(std::string state);

	private:
		std::string m_state;
	};

	class Caretaker
	{
	public:
		Caretaker();
		~Caretaker();

		void setMemento(Memento* pMemento);
		Memento* getMemento();

	private:
		Memento * m_pMemento;
	};

	class Originator
	{
	public:
		Originator(std::string state);
		~Originator();

		void changeState();
		std::string getState();
		void setState(std::string state);

		Memento* createMemento();

		void restoreMemento(Memento* pMto);

	private:
		std::string m_state;
	};

}

#endif // !_MEMENTO_H_
