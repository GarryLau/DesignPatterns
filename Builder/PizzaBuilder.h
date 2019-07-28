#pragma once

#include "Pizza.h"

class PizzaBuilder
{
public:
    void createPizza() {
        m_pizza = new Pizza();
    }
    Pizza * getPizza() {
        return m_pizza;
    }
protected: /* 将制作pizza的各个工序设置成protected是因为调用单个的方法是没有意义的，做不成pizza，做pizza的固定不变的成套的工序在Cook中实现 */
    virtual void buildDough() = 0;
    virtual void buildTopping() = 0;

protected:
    Pizza *m_pizza;
    /* 将Cook作为PizzaBuilder的友元是方便访问制作Pizza的各个工序的方法，如buildDough,buildTopping等 */
    friend class Cook;
};

class SeaFoodPizzaBuilder : public PizzaBuilder
{
protected:
    void buildDough()override {
        m_pizza->setDough("sea food dough");
    }
    void buildTopping()override {
        m_pizza->setTopping("sea food topping");
    }
};

class CheesePizzaBuilder : public PizzaBuilder
{
protected:
    void buildDough()override {
        m_pizza->setDough("cheese dough");
    }
    void buildTopping()override {
        m_pizza->setTopping("cheese topping");
    }
};