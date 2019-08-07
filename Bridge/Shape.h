/* Abstraction */
class Shape
{
public:
    virtual void drawShape() = 0;
protected:
    Shape() = default;
    ~Shape() = default;
    /* 不同子类共有成员应当提升到父类中 */
    Drawing * m_drawing;
};
/* Refined Abstraction，具体业务类型，Rectangle业务 */
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
/* Refined Abstraction，具体业务类型，Circle业务 */
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
