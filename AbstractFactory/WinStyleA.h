#ifndef _WIN_STYLE_A_H_
#define _WIN_STYLE_A_H_

#include "Window.h"

#ifdef __cplusplus
extern "C"{
#endif

class WinStyleA : public Window
{
public:
    WinStyleA(unsigned int resolution);
    ~WinStyleA() = default;
    virtual WinStyleA * addWindow() override;
    unsigned int getResolution();
private:
    unsigned int m_resolution;
}; 


#ifdef __cplusplus
}
#endif
#endif