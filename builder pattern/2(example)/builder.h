#ifndef _BUILDER_H_
#define _BUILDER_H_

class Model;
class Builder
{
public:
	virtual ~Builder();
	virtual void BuildModel() = 0;
	virtual Model* getModel() = 0;

protected:
	Builder();

};

class ConcreteBuilder: public Builder
{
public:
	ConcreteBuilder();
	~ConcreteBuilder();
	virtual void BuildModel() override;
	virtual Model* getModel() override;

private:
	Model * _model;
};


#endif // !_BUILDER_H_
