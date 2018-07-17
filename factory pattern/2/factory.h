#ifndef _FACTORY_H_
#define _FACTORY_H_
#include<type_traits>
#include"product.h"

class Factory
{
public:

	Factory(){}
	~Factory() {}

	template<typename T>
	typename std::enable_if<std::is_base_of<Product, T>::value, T>::type * createProduct()
	{
		return new T();
	}

};


#endif // !_FACTORY_HPP_
