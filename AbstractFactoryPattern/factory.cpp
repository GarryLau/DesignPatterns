#include "factory.h"

/* 构造函数定义 */
/* 注意：在main中调用了factory的构造函数，
   因此必须有factory的定义即使函数体为空，
   否则会出现“无法解析的外部符号” */
factory::factory()
{
	;
}

factoryI::factoryI()
{
	;
}

factoryII::factoryII()
{
	;
}


productA * factoryI::CreateProductA()
{
	return new productA1;
}

productA * factoryII::CreateProductA()
{
	return new productA2;
}

productB * factoryI::CreateProductB()
{
	return new productB1;
}

productB * factoryII::CreateProductB()
{
	return new productB2;
}