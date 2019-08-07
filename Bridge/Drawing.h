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
/* Concrete Implementor��PCƽ̨Ӧ�� */
class PCDrawing : public Drawing
{
public:
    virtual void draw() override {
        std::cout << "Draw on PC." << std::endl;
    }
};
/* Concrete Implementor��Mobileƽ̨Ӧ�� */
class MobileDrawing : public Drawing
{
public:
    virtual void draw()override {
        std::cout << "Draw on Mobile." << std::endl;
    }
};