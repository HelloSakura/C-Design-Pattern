#ifndef _PROXY_H_
#define _PROXY_H_

namespace proxy {
	
	class Subject
	{
	public:
		virtual ~Subject();

		virtual void Request() = 0;
		virtual Subject* getProxy() = 0;

	protected:
		Subject();

	};

	class Proxy: public Subject
	{
	public:
		Proxy(Subject* pSbj);
		~Proxy();

		virtual void Request() override;
		virtual Subject* getProxy() override;

	private:
		Subject * m_pSbj;
	};


	class RealSubject: public Subject
	{
	public:
		RealSubject();
		~RealSubject();

		virtual void Request() override;
		virtual Subject* getProxy() override;

	private:
		Subject * m_proxy;
	};



}

#endif // !_PROXY_H_
