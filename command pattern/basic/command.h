#ifndef _COMMAND_H_
#define _COMMAND_H_


namespace command {
	class Receiver
	{
	public:
		Receiver();
		~Receiver();

		void action();

	private:

	};

	
	class Command
	{
	public:
		virtual ~Command();

		virtual void excute() = 0;

	protected:
		Command();
	};

	class ConcreteCommand:public Command
	{
	public:
		ConcreteCommand(Receiver* pRec);
		~ConcreteCommand();

		virtual void excute() override;
	private:
		Receiver * m_pRec;
	};

	class Invoker
	{
	public:
		Invoker();
		~Invoker();

		void setCommand(Command* pCmd);
		void action();

	private:
		Command * m_pCmd;
	};



}

#endif // !_COMMAND_H_
