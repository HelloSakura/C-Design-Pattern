#ifndef _STATE_H_
#define _STATE_H_

namespace state_t {

	class Context;
	class State
	{
	public:
		virtual ~State();

		virtual void operationInterface(Context* t_context) = 0;
		virtual void operationChangeState(Context* t_context) = 0;
		

	protected:
		State();
		bool changeState(Context* con, State* st);

	};

	class ConcreteStateA :public State
	{
	public:
		~ConcreteStateA();

		static State* getInstance();

		virtual void operationInterface(Context* t_context) override;
		virtual void operationChangeState(Context* t_context) override;

	protected:
		ConcreteStateA();
		static State* p_st;
	};


	class ConcreteStateB :public State
	{
	public:

		~ConcreteStateB();

		static State* getInstance();

		virtual void operationInterface(Context* t_context) override;
		virtual void operationChangeState(Context* t_context) override;
		

	protected:
		ConcreteStateB();
		static State* p_st;
	};




}
#endif // !_STATE_H_
