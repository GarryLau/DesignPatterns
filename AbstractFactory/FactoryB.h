#ifndef _FACTORY_B_H_
#define _FACTORY_B_H_

#include "WidgetFactory.h"

#ifdef __cplusplus
extern "C" {
#endif

class FactoryB : public WidgetFactory
{
public:
    FactoryB() = default;
    ~FactoryB() = default;
    virtual Window * createWindow() override;
    virtual ScrollBar * createScrollBar() override;
};

#ifdef __cplusplus
}
#endif

#endif