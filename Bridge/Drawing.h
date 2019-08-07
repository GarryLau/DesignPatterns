#include <iostream>

/* Implementor */
class Drawing
{
public:
    virtual void draw() = 0;
protected:
    Drawing() = default;
    ~Drawing() = default;
};
/* Concrete Implementor，PC平台应用 */
class PCDrawing : public Drawing
{
public:
    virtual void draw() override {
        std::cout << "Draw on PC." << std::endl;
    }
};
/* Concrete Implementor，Mobile平台应用 */
class MobileDrawing : public Drawing
{
public:
    virtual void draw()override {
        std::cout << "Draw on Mobile." << std::endl;
    }
};