#include "Iterator.h"
#include <iostream>

int main()
{
    ListAggeragte alistagg;
    for (int i = 0; i !=10; ++i)
    {
        alistagg.push(i);
    }
    ListIterator *listiter = alistagg.createIterator();
    for (listiter->First(); !listiter->isDone(); listiter->Next())
    {
        std::cout << listiter->currentItem() << std::endl;
    }
    /* ������ջ�Ϸ����listiter�����Զ�����������������Ҫ�ֶ��ͷŶ����ڴ� */
    if (nullptr != listiter)
    {
        delete listiter;
        listiter = nullptr;
    }
    return 0;
}