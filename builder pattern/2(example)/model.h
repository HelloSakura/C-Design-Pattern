#ifndef _MODEL_H_
#define _MODEL_H_
#include<string>
#include<vector>

using namespace std;

class Model
{
public:
	virtual ~Model();
	virtual void StepOne(const string& s)= 0;
	virtual void StepTwo(const string& s) = 0;
	virtual void StepThree(const string& s) = 0;
	virtual void doSomething() = 0;

protected:
	Model();

	vector<string> s_vec;

private:
	
};

class ConcreteModel:public Model
{
public:
	ConcreteModel();
	~ConcreteModel();

	virtual void StepOne(const string& s) override;
	virtual void StepTwo(const string& s) override;
	virtual void StepThree(const string& s) override;
	virtual void doSomething() override;

private:
	
};


#endif // !_MODEL_H_
