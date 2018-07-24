#ifndef _MEMENTO_H_
#define _MEMENTO_H_
#include<string>
#include<map>
#include<chrono>
#include<ratio>

namespace memento {

	typedef std::chrono::duration <int, std::ratio<1>> days_type;
	typedef std::chrono::time_point<std::chrono::system_clock, days_type> day_type;

	class IMemento
	{
	public:
		IMemento();
		virtual ~IMemento();
		
		virtual void setState(std::string state) = 0;
		virtual std::string getState() = 0;

	private:

	};

	

	class Caretaker
	{
	public:
		Caretaker();
		~Caretaker();

		void setMemento(day_type t_day, IMemento* pMemento);
		IMemento* getMemento(day_type t_day);



	private:
		std::map<day_type, IMemento*> memo_map;
	};

	class Originator
	{
	private:
		class Memento : public IMemento
		{
		public:
			Memento(std::string state);
			~Memento();

			virtual std::string getState() override;
			virtual void setState(std::string state) override;

		private:
			std::string m_state;
		};

	public:
		Originator(std::string state);
		~Originator();

		void changeState();
		std::string getState();
		void setState(std::string state);

		IMemento* createMemento();

		void restoreMemento(IMemento* pMto);

	private:
		std::string m_state;
	};

}

#endif // !_MEMENTO_H_
