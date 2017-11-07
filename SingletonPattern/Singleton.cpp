#include "Singleton.h"
#include <iostream>

Singleton* Singleton::instance = nullptr;   /* ע�⣺�������static�ĳ�Ա���г�ʼ���ᱨ���޷��������ⲿ���ŵĴ��� */

Singleton::Singleton()
{
	std::cout << "Constructor called!" << std::endl;
}


Singleton::~Singleton()
{
}

Singleton* Singleton::Instance()
{
	if (nullptr == instance)
	{
		std::cout << "return a new singleton" << std::endl;
		instance = new Singleton;
		return instance;
	}
	else
	{
		std::cout << "return an existed singleton" << std::endl;
		return instance;
	}
}