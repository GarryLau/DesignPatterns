#include "FactoryB.h"
#include "WinStyleB.h"
#include "ScrollStyleB.h"

Window * FactoryB::createWindow()
{
    return new WinStyleB(0,0);
}

ScrollBar * FactoryB::createScrollBar()
{
    return new ScrollStyleB("Red");
}
