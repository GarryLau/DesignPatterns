#include "factory.h"

/* ���캯������ */
/* ע�⣺��main�е�����factory�Ĺ��캯����
   ��˱�����factory�Ķ��弴ʹ������Ϊ�գ�
   �������֡��޷��������ⲿ���š� */
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