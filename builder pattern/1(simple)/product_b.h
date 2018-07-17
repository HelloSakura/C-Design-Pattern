#ifndef _PRODUCT_B_H_
#define _PRODUCT_B_H_

class Product
{
public:
	Product();
	~Product();
	void ProducePart();

private:

};

class ProductPart
{
public:
	ProductPart();
	~ProductPart();
	ProductPart* BuildPart();


private:

};


#endif // !_PRODUCT_B_H_
