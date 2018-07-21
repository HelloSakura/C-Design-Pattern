#ifndef _STRATEGY_H_
#define _STRAREGY_H_

namespace strategy {
	class Strategy
	{
	public:
		virtual ~Strategy();

		virtual int algorithmInterface(int a, int b) = 0;

	protected:
		Strategy();

	};

	class ConcreteStrategyAdd:public Strategy
	{
	public:
		ConcreteStrategyAdd();
		~ConcreteStrategyAdd();


		virtual int algorithmInterface(int a, int b) override;

	private:

	};

	class ConcreteStrategySub :public Strategy
	{
	public:
		ConcreteStrategySub();
		~ConcreteStrategySub();


		virtual int algorithmInterface(int a, int b) override;

	private:

	};
	
	class Context
	{
	public:
		Context(Strategy * pS);
		~Context();

		int doAction(int a, int b);

	private:
		Strategy * m_pS;
	};


}

#endif // !_STRATEGY_H_
