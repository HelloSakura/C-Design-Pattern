#ifndef _OBSERVABLE_H_
#define _OBSERVABLE_H_
#include<vector>

namespace observer {
	
	class Observer;
	struct Message;

	class Observable
	{
	public:
		Observable();
		virtual ~Observable();

		void attach(Observer& obs);
		void detach(Observer& obs);
		void notify(Message& message);

	private:
		bool hasObserver(Observer& obs);

		std::vector<Observer*> m_obs_vec;

	};


	class Subject: public Observable
	{
	public:
		using Observable::Observable;

		void doSomething();

	private:

	};


}

#endif // !_OBSERVABLE_H_
