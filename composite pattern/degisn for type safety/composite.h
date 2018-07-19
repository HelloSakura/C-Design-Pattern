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
		virtual void Traversal() = 0;
		virtual bool operator == (const Component& other);

	protected:
		std::string _str;
	};



	class Composite : public Component
	{
	public:
		using Component::Component;
		~Composite();

		virtual void operation() override;
		virtual void Traversal() override;

		void add(Component* child);
		void remove(Component* child);
		Component* getChild(int t);
		
		


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
