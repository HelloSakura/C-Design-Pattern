#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include<functional>
#include<map>

class NonCopyable
{
protected:
	NonCopyable() = default;
	~NonCopyable() = default;
	NonCopyable(const NonCopyable&) = delete;
	NonCopyable& operator = (const NonCopyable&) = delete;

};

template<typename Func>
class Event:public NonCopyable
{
public:
	Event()
	{}

	~Event()
	{}

	int Connect(Func&& f)
	{
		return Assign(f);
	}

	int Connect(const Func& f)
	{
		return Assign(f);
	}

	void Disconnect(int key)
	{
		m_connections.erase(key);
	}

	template<typename ... Args>
	void Notify(Args... args)
	{
		for (auto& it : m_connections){
			it.second(std::forward<Args>(args)...);
		}
	}

private:
	template<typename F>
	int Assign(F&& f)
	{
		int k = m_observerId++;
		m_connections.emplace(k, std::forward<F>(f));
		return k;
	}

private:
	int m_observerId = 0;
	std::map<int, Func> m_connections;
};



#endif // !_OBSERVER_H_
