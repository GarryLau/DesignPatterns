#ifndef _FACTORY_A_H
#define _FACTORY_A_H

#include "WidgetFactory.h"

#ifdef __cplusplus
extern "C" {
#endif
    
class FactoryA : public WidgetFactory
{
public:
    FactoryA() = default;
    ~FactoryA() = default;
    virtual Window * createWindow() override;
    virtual ScrollBar * createScrollBar() override;
};

#ifdef __cplusplus
}
#endif
#endif
