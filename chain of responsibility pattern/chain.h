#ifndef _CHAIN_H_
#define _CHAIN_H_

namespace chain {

	class Request {
	public:
		int level;
	};

	class Handler
	{
	public:
		Handler();
		virtual ~Handler();

		void setHandler(Handler* handler);
		virtual void handlerRequest(Request* requset);


	protected:
		Handler * m_handler;
		int m_handlerLever;
	};


	class ConcreteHandlerA:public Handler
	{
	public:
		ConcreteHandlerA();
		virtual ~ConcreteHandlerA();

		virtual void handlerRequest(Request* requset) override;

	private:

	};


	class ConcreteHandlerB :public ConcreteHandlerA
	{
	public:
		ConcreteHandlerB();
		virtual ~ConcreteHandlerB();

		virtual void handlerRequest(Request* requset) override;

	private:

	};


}

#endif // !_CHAIN_H_
