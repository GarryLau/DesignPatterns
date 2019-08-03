#pragma once

#include <iostream>

/* Adaptee class */
class LegacyRect
{
public:
    LegacyRect(int x,int y,int w,int h): m_x(x),m_y(y),m_w(w),m_h(h){
        std::cout << "LegacyRect constructor called." << std::endl;
    }
    void legacyDraw() {
        std::cout << "m_x:" << m_x << "\tm_y:" << m_y << 
                     "\tm_w:" << m_w << "\tm_h:" << m_h << std::endl;
    }
private:
    int m_x;
    int m_y;
    int m_w;
    int m_h;
};