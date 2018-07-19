#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_
#include<vector>
#include<string>

namespace composite {

	class Component
	{
	public:
		Component(std::string str);
		virtual ~Component();

		virtual void operation();
		virtual void add(Component* child);
		virtual void remove(Component* child);
		virtual Component* getChild(int t);
		virtual bool operator == (const Component& other);

		virtual void Traversal() = 0;

	protected:
		std::string _str;
	};



	class Composite : public Component
	{
	public:
		using Component::Component;
		~Composite();

		virtual void  operation() override;
		virtual void add(Component* child) override;
		virtual void remove(Component* child) override;
		virtual Component* getChild(int t) override;
		virtual void Traversal() override;

	private:
		std::vector<Component*> cpt_vec;
	};


	class Leaf : public Component
	{
	public:
		using Component::Component;

		virtual void operation() override;
		virtual void Traversal();

	private:

	};

}



#endif // !_COMPOSITE_H_
