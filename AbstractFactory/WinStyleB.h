#ifndef _WIN_STYLE_B_H_
#define _WIN_STYLE_B_H_

#include "Window.h"

#ifdef __cplusplus
extern "C"{
#endif

class WinStyleB : public Window
{
public:
    WinStyleB(int w,int h);
    ~WinStyleB()=default;
    unsigned int getWidth();
    unsigned int getHeight();
    virtual WinStyleB * addWindow() override;
private:
    int m_width;
    int m_height;
};


#ifdef __cplusplus
}
#endif
#endif