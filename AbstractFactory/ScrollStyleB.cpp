#include "ScrollStyleB.h"


ScrollStyleB::ScrollStyleB(std::string color)
{
    m_color = color;
}

ScrollStyleB * ScrollStyleB::addScrollBar()
{
    return new ScrollStyleB("");
}
