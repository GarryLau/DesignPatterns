#pragma once

#include "Rect.h"
#include "LegacyRect.h"

/* Adapter class */
class Adapter : public Rect
{
public:
    Adapter(int x,int y, int w,int h){
        m_legacyrect = new LegacyRect(x, y, w, h);
        std::cout << "Adapter constructor called." << std::endl;
    }
    ~Adapter() {
        if (nullptr != m_legacyrect) {
            delete m_legacyrect;
            m_legacyrect = nullptr;
        }
    }
    virtual void draw() override {
        m_legacyrect->legacyDraw();
    }

private:
    LegacyRect *m_legacyrect;
};
