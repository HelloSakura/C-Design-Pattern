#ifndef _VISITOR_H_
#define _VISITOR_H_

namespace visitor {
	class Element;

	class Visitor
	{
	public:
		virtual ~Visitor();

		virtual void visitConcreteElementA(Element* elm) = 0;
		virtual void visitConcreteElementB(Element* elm) = 0;

	protected:
		Visitor();
	};

	class ConcreteVisitorA:public Visitor
	{
	public:
		ConcreteVisitorA();
		virtual ~ConcreteVisitorA();

		virtual void visitConcreteElementA(Element* elm) override;
		virtual void visitConcreteElementB(Element* elm) override;

	private:

	};

	class ConcreteVisitorB :public Visitor
	{
	public:
		ConcreteVisitorB();
		virtual ~ConcreteVisitorB();

		virtual void visitConcreteElementA(Element* elm) override;
		virtual void visitConcreteElementB(Element* elm) override;

	private:

	};


}

#endif // !_VISITOR_H_
