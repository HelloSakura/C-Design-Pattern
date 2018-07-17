#include"builder.h"
#include"model.h"

Builder::Builder()
{

}

Builder::~Builder()
{

}

ConcreteBuilder::ConcreteBuilder()
{

}

ConcreteBuilder::~ConcreteBuilder()
{

}

void ConcreteBuilder::BuildModel()
{
	//总感觉又是一个model对应一个Builder好别扭
	_model = new ConcreteModel();
	_model->StepOne("I");
	_model->StepTwo("think");
	_model->StepThree("unique!");
}

Model* ConcreteBuilder::getModel()
{
	if (nullptr == _model) {
		this->BuildModel();
	}

	return _model;
}
