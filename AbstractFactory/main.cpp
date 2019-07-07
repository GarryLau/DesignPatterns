#include "WidgetFactory.h"
#include "FactoryA.h"
#include "FactoryB.h"

//#define STYLE_A

int main()
{
#ifdef STYLE_A
    WidgetFactory *onefactory = new FactoryA;
#else
    WidgetFactory *onefactory = new FactoryB;
#endif
    Window *onewin = onefactory->createWindow();
    ScrollBar *onescroll = onefactory->createScrollBar();

    return 0;
}
