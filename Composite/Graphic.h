#pragma once

#include <vector>
#include <iostream>

/* component */
class Graphic
{
public:
    virtual void draw() const = 0;
    virtual void add(Graphic *g){}
    Graphic() = default;
    ~Graphic() = default;
};

/* leaf */
class Line : public Graphic
{
public:
    Line() {
        std::cout << "Line constructor called." << std::endl;
    }
    ~Line() {
        std::cout << "Line destructor called." << std::endl;
    }
    virtual void draw()const override {
        std::cout << "Draw a line." << std::endl;
    }
};

/* leaf */
class Text : public Graphic
{
public:
    Text() {
        std::cout << "Text constructor called." << std::endl;
    }
    ~Text() {
        std::cout << "Text destructor called." << std::endl;
    }
    virtual void draw() const override {
        std::cout << "Draw a text." << std::endl;
    }
};

/* composite */
class Picture : public Graphic
{
private:
    std::vector<Graphic*> m_g;
public:
    virtual void draw()const {
        std::cout << "*^____^* Picture time." << std::endl;
        for (auto it:m_g)
        {
            it->draw();
        }
    }
    virtual void add(Graphic *g) {
        m_g.push_back(g);
    }
};