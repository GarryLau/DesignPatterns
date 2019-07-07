#ifndef _SCROLL_STYLEB_H_
#define _SCROLL_STYLEB_H_

#include "ScrollBar.h"
#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

class ScrollStyleB : public ScrollBar
{
public:
    ScrollStyleB(std::string color);
    ~ScrollStyleB() = default;
    ScrollStyleB * addScrollBar();

private:
    std::string m_color;
};


#ifdef __cplusplus
}
#endif
#endif