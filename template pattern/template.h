#ifndef _TEMPLATE_T_H_
#define _TEMPLATE_T_H_

namespace template_t {
	class AbstractClass
	{
	public:
		AbstractClass();
		~AbstractClass();

		void templateMethod();

	protected:
		virtual void doFuncA() = 0;
		virtual void doFuncB() = 0;
		virtual bool hookFunc() = 0;
	};


	class ConcreteClassA: public AbstractClass
	{
	public:
		using AbstractClass::AbstractClass;

		void setHookFlag(bool hookFlag);

	protected:
		virtual void doFuncA() override;
		virtual void doFuncB() override;
		virtual bool hookFunc() override;

	private:
		bool m_hookFlag = false;

	};


	class ConcreteClassB: public AbstractClass
	{
	public:
		using AbstractClass::AbstractClass;

	protected:
		virtual void doFuncA() override;
		virtual void doFuncB() override;
		virtual bool hookFunc() override;


	};



}

#endif // !_TEMPLATE_T_H_
