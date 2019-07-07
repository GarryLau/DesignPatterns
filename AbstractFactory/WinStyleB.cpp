#include "WinStyleB.h"


WinStyleB::WinStyleB(int w, int h)
{
    m_width = w;
    m_height = h;
}

unsigned int WinStyleB::getWidth()
{
    return m_width;
}

unsigned int WinStyleB::getHeight()
{
    return m_height;
}

WinStyleB * WinStyleB::addWindow()
{
    return new WinStyleB(0,0);
}
