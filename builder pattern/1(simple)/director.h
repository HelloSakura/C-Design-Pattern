#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

class Builder;
class Product;

class Diretor
{
public:
	Diretor(Builder* bld);
	~Diretor();

	void Construct();

private:
	Builder* _bld;
};


#endif