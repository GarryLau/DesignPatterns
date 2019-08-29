#ifndef _MODEL_H_
#define _MODEL_H_

#include <string>
#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

    /* Flyweight Abstract Class */
    class Model
    {
    public:
        Model(std::string name, int speed) : m_name(name), m_speed(speed) {
            std::cout << "Model ctor called." << std::endl;
        }
        virtual void showDetail() {
            std::cout << "Name: " << m_name << ", Speed: " << m_speed << std::endl;
        }
    protected:
        std::string m_name;
        int m_speed;
    };

    /* Flyweight Concrete Class */
    class Airbus : public Model
    {
    public:
        Airbus() : Model("Airbus", 200) {
            std::cout << "Airbus ctor called." << std::endl;
        }
    };

    /* Flyweight Concrete Class */
    class Boeing : public Model
    {
    public:
        Boeing() : Model("Boeing", 600) {
            std::cout << "Boeing ctor called." << std::endl;
        }
    };

#ifdef __cplusplus
}
#endif
#endif
