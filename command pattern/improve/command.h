#ifndef _COMMAND_H_
#define _COMMAND_H_


namespace command {
	class Receiver
	{
	public:
		virtual ~Receiver();

		virtual void action() = 0;

	protected:
		Receiver();
	};

	class ConcreteReceiver :public Receiver
	{
	public:
		ConcreteReceiver();
		~ConcreteReceiver();

		virtual void action() override;
	};

	
	class Command
	{
	public:
		virtual ~Command();

		virtual void excute() = 0;
		virtual void rollback() = 0;

	protected:
		Receiver * m_pRec;

		Command(Receiver* rRec);
	};

	class ConcreteCommand:public Command
	{
	public:
		ConcreteCommand();
		~ConcreteCommand();

		virtual void excute() override;
		virtual void rollback() override;

	private:
		
	};

	class Invoker
	{
	public:
		Invoker();
		~Invoker();

		void setCommand(Command* pCmd);
		void action();
		void rollback();

	private:
		Command * m_pCmd;
	};



}

#endif // !_COMMAND_H_
