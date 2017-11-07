/* Singleton������ȷ��ĳ����ֻ��һ������ʵ�������ǵ��߳��еĵ���ģʽ
   ��Double-Checked Locking�Ƕ��߳��еĵ���ģʽ��*/
#include <iostream>
#include "Singleton.h"

/* ����Ĳ��Կ��Է��ֶ��������������캯��ֻ������һ�� */
int main()
{
	/* Singleton�����Ա�ʵ������ֻ��ͨ������ֱ�ӷ��� */
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