#include"observable.h"
#include"observer.h"
#include<string>

using namespace observer;

observer::Observable::Observable()
{
}

observer::Observable::~Observable()
{
	for (auto it = m_obs_vec.begin(); it != m_obs_vec.end(); ++it) {
		delete *it;			//对于要不要负责回收工作，我还是抱有很大疑问，起码这种回收方式存在很大的问题
	}
}

void observer::Observable::attach(Observer & obs)
{
	if (!hasObserver(obs))
		m_obs_vec.push_back(&obs);
}

void observer::Observable::detach(Observer & obs)
{
	for (auto it = m_obs_vec.begin(); it != m_obs_vec.end(); ++it) {
		if (**it == obs) {
			m_obs_vec.erase(it);
			break;
		}
	}
}

void observer::Observable::notify(Message & message)
{
	for (auto it = m_obs_vec.begin(); it != m_obs_vec.end(); ++it) {
		(*it)->update(message);
	}
}

bool observer::Observable::hasObserver(Observer& obs)
{
	for (auto it = m_obs_vec.begin(); it != m_obs_vec.end(); ++it) {
		if (**it == obs) {
			return true;
		}
	}

	return false;
}

void observer::Subject::doSomething()
{
	Message t_msg;
	t_msg.flag = true;
	t_msg.msg = "Hello, observer!";

	this->notify(t_msg);
}
