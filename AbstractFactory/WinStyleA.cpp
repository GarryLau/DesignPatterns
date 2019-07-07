#include "WinStyleA.h"


WinStyleA::WinStyleA(unsigned int resolution)
{
    m_resolution = resolution;
}

WinStyleA * WinStyleA::addWindow()
{
    return new WinStyleA(0);
}

unsigned int WinStyleA::getResolution()
{
    return m_resolution;
}
