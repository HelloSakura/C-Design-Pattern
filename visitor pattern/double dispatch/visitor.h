#ifndef _VISITOR_H_
#define _VISITOR_H_

namespace visitor {
	
	class Element;
	class ConcreteElementA;
	class ConcreteElementB;

	class Visitor
	{
	public:
		virtual ~Visitor();

		virtual void visitConcreteElement(ConcreteElementA* elm) = 0;
		virtual void visitConcreteElement(ConcreteElementB* elm) = 0;

	protected:
		Visitor();
	};

	class ConcreteVisitorA:public Visitor
	{
	public:
		ConcreteVisitorA();
		virtual ~ConcreteVisitorA();

		virtual void visitConcreteElement(ConcreteElementA* elm) override;
		virtual void visitConcreteElement(ConcreteElementB* elm) override;

	private:

	};

	class ConcreteVisitorB :public Visitor
	{
	public:
		ConcreteVisitorB();
		virtual ~ConcreteVisitorB();

		virtual void visitConcreteElement(ConcreteElementA* elm) override;
		virtual void visitConcreteElement(ConcreteElementB* elm) override;

	private:

	};


}

#endif // !_VISITOR_H_
