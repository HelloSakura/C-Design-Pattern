#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_
#include<string>
#include<set>


namespace mediator {

	class Colleague;
	

	class Mediator
	{
	public:
		virtual ~Mediator();

		virtual void setColleague(Colleague* pClg) = 0;
		virtual void send(std::string str, Colleague* pClg) = 0;


	protected:
		Mediator();
	};

	
	class ConcreteMediator:public Mediator
	{
	public:
		ConcreteMediator();
		~ConcreteMediator();

		virtual void setColleague(Colleague* pClg) override;
		virtual void send(std::string str, Colleague* pClg) override;

	private:
		Colleague * m_pClgA;
		Colleague * m_pClgB;
		Colleague * m_pClgC;

	};
}

#endif // !_MEDIATOR_H_
