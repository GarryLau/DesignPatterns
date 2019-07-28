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
protected: /* ������pizza�ĸ����������ó�protected����Ϊ���õ����ķ�����û������ģ�������pizza����pizza�Ĺ̶�����ĳ��׵Ĺ�����Cook��ʵ�� */
    virtual void buildDough() = 0;
    virtual void buildTopping() = 0;

protected:
    Pizza *m_pizza;
    /* ��Cook��ΪPizzaBuilder����Ԫ�Ƿ����������Pizza�ĸ�������ķ�������buildDough,buildTopping�� */
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