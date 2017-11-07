/* 抽象工厂模式：提供一个接口，用于创建相关或依赖对象的家族，而不需要明确指定具体类。 */
#include "factory.h"

int main()
{
	factoryI *facA1 = new factoryI;
	facA1->CreateProductA()->ShowProduct();

	factoryII *facA2 = new factoryII;
	facA2->CreateProductA()->ShowProduct();

	factoryI *facB1 = new factoryI;
	facB1->CreateProductB()->ShowProduct();

	factoryII *facB2 = new factoryII;
	facB2->CreateProductB()->ShowProduct();

	return 0;
}