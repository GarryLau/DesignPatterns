#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <string>
#include <iostream>

class Observer
{
public:
    virtual ~Observer() = default;
    virtual void update(std::string message) = 0;
};

class ConcreteObserver : public Observer
{
public:
    ConcreteObserver(std::string name) : m_name(name) {
        std::cout << "ConcreteObserver constructor called." << std::endl;
    }
    void update(std::string message) override {
        std::cout << m_name << " --> Got message: " << message << std::endl;
    }
private:
    std::string m_name;  // observer's name
};

#endif