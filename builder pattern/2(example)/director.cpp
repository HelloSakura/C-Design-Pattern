#include"diretor.h"
#include"model.h"
#include"builder.h"

Director::Director(Builder* bld):_bld(bld)
{

}

Director::~Director()
{

}

void Director::setBuilder(Builder *bld)
{
	if (nullptr != _bld) {
		delete _bld;
	}

	_bld = bld;
}

Model* Director::getProduct()
{
	return _bld->getModel();
}