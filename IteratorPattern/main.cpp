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
    /* 不是在栈上分配的listiter不会自动调用析构函数，需要手动释放堆上内存 */
    if (nullptr != listiter)
    {
        delete listiter;
        listiter = nullptr;
    }
    return 0;
}