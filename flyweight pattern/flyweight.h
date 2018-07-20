#ifndef _FLYWEIGHT_H_
#define _FLYWEIGHT_H_
#include<string>
#include<vector>

namespace flyweight {
	

	class Flyweight
	{
	public:
		virtual ~Flyweight();
		virtual void setColor(std::string& color) = 0;
		virtual std::string getShape() = 0;
		virtual void show();

	
		Flyweight(std::string shape);
		

	
	protected:
		std::string m_shape;
		std::string m_color;

	};


	class ConcreteFlyweight:public Flyweight
	{
	public:
		using Flyweight::Flyweight;
		using Flyweight::show;


		virtual void setColor(std::string& color) override;
		virtual std::string getShape() override;

	private:

	};


	class FlyFactory
	{
	public:
		FlyFactory();
		~FlyFactory();

		Flyweight* getFwtInstance(std::string& shape);
		Flyweight* getFwtInstance(std::string&& shape);

	private:
		std::vector<Flyweight*> fwt_vec;
	};



}


#endif // !_FLYWEIGHT_H_
