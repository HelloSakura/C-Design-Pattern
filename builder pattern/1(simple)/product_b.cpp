#include"product_b.h"
#include<iostream>

Product::Product()
{
	ProducePart();
	std::cout << "return a product" << std::endl;
}

Product::~Product()
{

}

void Product::ProducePart()
{
	std::cout << "build part of product..." << std::endl;
}

ProductPart::ProductPart()
{

}

ProductPart::~ProductPart()
{

}

ProductPart* ProductPart::BuildPart()
{
	return new ProductPart();
}
