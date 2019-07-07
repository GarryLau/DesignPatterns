#include "FactoryA.h"
#include "WinStyleA.h"
#include "ScrollStyleA.h"

Window * FactoryA::createWindow()
{
    return new WinStyleA(1920*1080);
}

ScrollBar * FactoryA::createScrollBar()
{
    return new ScrollStyleA("North");
}
