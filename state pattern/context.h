#ifndef _CONTEXT_H_
#define _CONTEXT_H_


namespace state_t {

	class State;
	class Context
	{
	public:
		Context();
		Context(State* st);
		~Context();

		void operationInterface();
		void operationChangeState();

	private:
		friend class State;
		bool changeState(State* p_state);

		State* m_st;

	};

}

#endif // !_CONTEXT_H_
