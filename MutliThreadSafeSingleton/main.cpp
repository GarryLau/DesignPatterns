
#include <cassert>
#include "singleton.h"
int main()
{
    Singleton *aex = Singleton::Instance();
    Singleton *bex = Singleton::Instance();

    /* aex和bex是同一个实例 */
    assert(aex == bex && aex->getLogPath() == bex->getLogPath());
}
