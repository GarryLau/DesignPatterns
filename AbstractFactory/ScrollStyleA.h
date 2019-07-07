#ifndef _SCROLL_STYLEA_H_
#define _SCROLL_STYLEA_H_

#include "ScrollBar.h"
#include <string>

#ifdef __cplusplus
extern "C"{
#endif

class ScrollStyleA : public ScrollBar
{
public:
    ScrollStyleA(std::string direction);
    ~ScrollStyleA() = default;
    std::string getDirection();
    virtual ScrollStyleA * addScrollBar() override;
private:
    std::string m_direction;
};

#ifdef __cplusplus
}
#endif
#endif