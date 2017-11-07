#include "Singleton.h"
#include <iostream>

Singleton* Singleton::instance = nullptr;   /* 注意：如果不对static的成员进行初始化会报“无法解析的外部符号的错误” */

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