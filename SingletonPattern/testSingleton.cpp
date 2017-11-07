/* Singleton，用于确保某个类只有一个对象实例化，是单线程中的单例模式
   （Double-Checked Locking是多线程中的单例模式）*/
#include <iostream>
#include "Singleton.h"

/* 下面的测试可以发现定义两个变量构造函数只调用了一次 */
int main()
{
	/* Singleton不可以被实例化，只能通过类来直接访问 */
	Singleton *psingle1 = Singleton::Instance();
	Singleton *psingle2 = Singleton::Instance();
	if (psingle1 == psingle2)
	{
		std::cout << "Singleton Successful!" << std::endl;
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}