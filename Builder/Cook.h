#pragma once

#include "PizzaBuilder.h"

class Cook
{
public:
    /* 将各个工序组合在一起的算法，相对稳定的构建过程 */
    void makePizza(PizzaBuilder *pb) {
        m_pb = pb;
        m_pb->createPizza();
        m_pb->buildDough();
        m_pb->buildTopping();
    }
    void showCookedPizza() {
        m_pb->getPizza()->showPizzaDetail();
    }
private:
    PizzaBuilder *m_pb;
};
