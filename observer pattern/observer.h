#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include<string>


namespace observer {
	class Observable;

	struct Message {
		bool flag;
		std::string msg;
	};

	class Observer
	{
	public:
		Observer(std::string str);
		virtual ~Observer();

		virtual void update(Message& msg) = 0;
		virtual bool operator==(const Observer& other);

	protected:
		std::string m_str;		//移永。。。艶心
	};

	class ConcreteObserver:public Observer
	{
	public:
		using Observer::Observer;

		virtual void update(Message& msg) override;

	private:
		
	};


}


#endif // !_OBSERVER_H_
