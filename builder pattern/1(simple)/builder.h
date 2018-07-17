#ifndef _BUILDER_H_
#define _BUILDER_H_
#include<string>

class Product;

class Builder
{
public:
	virtual ~Builder();
	virtual void BuildPartA(const std::string& part_s) = 0;
	virtual void BuildPartB(const std::string& part_s) = 0;
	virtual void BuildPartC(const std::string& part_s) = 0;
	virtual Product* GetProduct() = 0;

protected:
	Builder();
};

/*
不同的concrete builder实现不同Product的构造，通过GetProduct返回该产品
*/
class ConcreteBuilder: public Builder
{
public:
	ConcreteBuilder();
	~ConcreteBuilder();
	
	virtual void BuildPartA(const std::string& part_s) override;
	virtual void BuildPartB(const std::string& part_s) override;
	virtual void BuildPartC(const std::string& part_s) override;
	virtual Product* GetProduct() override;

private:

};



#endif // !_BUILDER_H_
