/* ���󹤳�ģʽ���ṩһ���ӿڣ����ڴ�����ػ���������ļ��壬������Ҫ��ȷָ�������ࡣ */
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