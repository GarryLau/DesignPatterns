/* Abstraction */
class Shape
{
public:
    virtual void drawShape() = 0;
protected:
    Shape() = default;
    ~Shape() = default;
    /* ��ͬ���๲�г�ԱӦ�������������� */
    Drawing * m_drawing;
};
/* Refined Abstraction������ҵ�����ͣ�Rectangleҵ�� */
class RectangleShape : public Shape
{
public:
    RectangleShape(int w, int h, Drawing * drawing) {
        m_width = w;
        m_height = h;
        m_drawing = drawing;
        std::cout << "RectangleShape constructor called." << std::endl;
    }
    virtual void drawShape()override {
        m_drawing->draw();
        std::cout << "Rectangle Draw pixels num is: " << rectangleArea() << std::endl;
    }
    int rectangleArea() {
        return m_width * m_height;
    }
private:
    int m_width;
    int m_height;
};
/* Refined Abstraction������ҵ�����ͣ�Circleҵ�� */
class CircleShape : public Shape
{
public:
    CircleShape(int radius, Drawing * drawing) {
        m_radius = radius;
        m_drawing = drawing;
        std::cout << "CircleShape constructor called." << std::endl;
    }
    virtual void drawShape()override {
        m_drawing->draw();
        std::cout << "Circle Draw pixels num is: " << circleArea() << std::endl;
    }
    int circleArea() {
        return m_radius * m_radius;
    }
private:
    int m_radius;
};
