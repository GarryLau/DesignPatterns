#include "product.h"
#include <iostream>

/* 构造函数定义 */
/* 注意：在factory.cpp中调用了product的构造函数，
   因此必须有product的定义即使函数体为空，
   否则会出现“无法解析的外部符号” */
productA::productA()
{
	;
}
productA1::productA1()
{
	;
}

productA2::productA2()
{
	;
}

productB::productB()
{
	;
}
productB1::productB1()
{
	;
}

productB2::productB2()
{
	;
}

void productA::ShowProduct()
{
	std::cout << "This is a product of A!" << std::endl;
}

void productA1::ShowProduct()
{
	std::cout << "This is a product of A1!" << std::endl;
}

void productA2::ShowProduct()
{
	std::cout << "This is a product of A2!" << std::endl;
}

void productB::ShowProduct()
{
	std::cout << "This is a product of B!" << std::endl;
}

void productB1::ShowProduct()
{
	std::cout << "This is a product of B1!" << std::endl;
}

void productB2::ShowProduct()
{
	std::cout << "This is a product of B2!" << std::endl;
}
