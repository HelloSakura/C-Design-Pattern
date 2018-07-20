#ifndef _PROXY_H_
#define _PROXY_H_

namespace proxy {
	
	class Subject
	{
	public:
		virtual ~Subject();

		virtual void Request() = 0;

	protected:
		Subject();

	};

	class Proxy: public Subject
	{
	public:
		Proxy();
		~Proxy();

		virtual void Request() override;

	private:
		Subject * m_pSbj;
	};


	class RealSubject: public Subject
	{
	public:
		RealSubject(Subject* pSbj);
		~RealSubject();

		virtual void Request() override;

	private:
		
	};



}

#endif // !_PROXY_H_
