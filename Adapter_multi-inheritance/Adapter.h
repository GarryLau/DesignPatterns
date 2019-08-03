#pragma once

#include "Rect.h"
#include "LegacyRect.h"

/* Adapter class */
class Adapter : public Rect, private LegacyRect
{
public:
    Adapter(int x,int y, int w,int h):LegacyRect(x,y,w,h) {
        std::cout << "Adapter constructor called." << std::endl;
    }
    void draw(){
        legacyDraw();
    }
};
