#pragma once

#include <iostream>

/* Target class */
class Rect
{
public:
    Rect() {
        std::cout << "Rect constructor called." << std::endl;
    }
    virtual void draw() = 0;
    // some function members
protected:
    ~Rect() = default;
private:
    // some data members
};
