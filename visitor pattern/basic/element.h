#ifndef _ELEMENT_H_
#define _ELEMENT_H_

namespace visitor {
	
	class Visitor;

	class Element
	{
	public:
		virtual ~Element();

		virtual void accept(Visitor* vis) = 0;

	protected:
		Element();
	};


	class ConcreteElementA:public Element
	{
	public:
		ConcreteElementA();
		virtual ~ConcreteElementA();

		virtual void accept(Visitor* vis) override;

	private:

	};

	class ConcreteElementB:public Element
	{
	public:
		ConcreteElementB();
		virtual ~ConcreteElementB();

		virtual void accept(Visitor* vis) override;

	private:

	};


}

#endif // !_ELEMENT_H_
