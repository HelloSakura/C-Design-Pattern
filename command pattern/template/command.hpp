#ifndef _COMMAND_HPP_
#define _COMMAND_HPP_
#include<functional>
#include<type_traits>

template<typename R = void>
class CommCommand
{
private:
	std::function<R()> m_f;

public:
	template<class F, class... Args, class = typename std::enable_if<!std::is_member_function_pointer<F>::value>::type>
	void wrap(F&& f, Args && ... args)
	{
		m_f = [&] {return f(args...); };
	}

	template<class R,class C, class... DArgs, class P, class... Args>
	void wrap(R(C::*f)(DArgs...) const, P&& p, Args && ... args)
	{
		m_f = [&, f] {return (*p.*f)(args...); };
	}


	template<class R, class C, class... DArgs, class P, class... Args>
	void wrap(R(C::*f)(DArgs...), P&& p, Args &&... args)
	{
		m_f = [&, f] {return (*p.*f)(args...); };
	}

	R excute()
	{
		return m_f();
	}
private:

};




#endif // !_COMMAND_HPP_
