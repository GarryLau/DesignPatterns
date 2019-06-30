
#include <cassert>
#include "singleton.h"
int main()
{
    Singleton *aex = Singleton::Instance();
    Singleton *bex = Singleton::Instance();

    /* aex��bex��ͬһ��ʵ�� */
    assert(aex == bex && aex->getLogPath() == bex->getLogPath());
}
