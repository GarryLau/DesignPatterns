#pragma once

#include <iostream>

class AbstractClass
{
public:
    ~AbstractClass() = default;
    /* A template method */
    void templateMethod() {
        primitiveOperation1();
        primitiveOperation2();
        concreteOperation();
        hook();
    }
protected:
    virtual void primitiveOperation1() = 0;
    virtual void primitiveOperation2() = 0;
    void concreteOperation() {
        std::cout << "Mandatory Operations for all ConcreteClasses" << std::endl;
    }
    virtual void hook(){}
};

class ConcreteClassA : public AbstractClass
{
protected:
    virtual void primitiveOperation1() override {
        std::cout << "primitiveOp1 A" << std::endl;
    }
    virtual void primitiveOperation2() override {
        std::cout << "primitiveOp2 A" << std::endl;
    }
};

class ConcreteClassB : public AbstractClass
{
protected:
    virtual void primitiveOperation1() override {
        std::cout << "primitiveOp1 B" << std::endl;
    }
    virtual void primitiveOperation2() override {
        std::cout << "primitiveOp2 B" << std::endl;
    }
    virtual void hook() override {
        std::cout << "hook() B" << std::endl;
    }
};