#ifndef _WIDGET_FACTORY_H_
#define _WIDGET_FACTORY_H_

#include "Window.h"
#include "ScrollBar.h"

#ifdef __cplusplus
extern "C"{
#endif

class WidgetFactory
{
public:
    WidgetFactory() = default;
    ~WidgetFactory() = default;
public:
    virtual Window * createWindow() = 0;
    virtual ScrollBar * createScrollBar() = 0;
};


#ifdef __cplusplus
}
#endif
#endif