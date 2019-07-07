#include "ScrollStyleA.h"

ScrollStyleA::ScrollStyleA(std::string direction)
{
    m_direction = direction;
}

std::string ScrollStyleA::getDirection()
{
    return m_direction;
}

ScrollStyleA * ScrollStyleA::addScrollBar()
{
    return new ScrollStyleA("");
}
