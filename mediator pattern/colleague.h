#ifndef _COLLEAGUE_H_
#define _COLLEAGUE_H_
#include<string>

namespace mediator {
	class Mediator;

	class Colleague
	{
	public:
		virtual ~Colleague();

		virtual void sendMessage(std::string str) = 0;
		virtual void getMessage(std::string str) = 0;

		void setMediator(Mediator* pMdt);

	protected:
		Colleague();
		Mediator * m_pMdt;

	};


	class ConcreteColleagueA :public Colleague
	{
	public:
		using Colleague::Colleague;



		virtual void sendMessage(std::string str) override;
		virtual void getMessage(std::string str) override;


	};


	class ConcreteColleagueB :public Colleague
	{
	public:
		using Colleague::Colleague;


		virtual void sendMessage(std::string str) override;
		virtual void getMessage(std::string str) override;


	};


	class ConcreteColleagueC :public Colleague
	{
	public:
		using Colleague::Colleague;


		virtual void sendMessage(std::string str) override;
		virtual void getMessage(std::string str) override;


	};
}

#endif // !_COLLEAGUE_H_
