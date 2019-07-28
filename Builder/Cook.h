#pragma once

#include "PizzaBuilder.h"

class Cook
{
public:
    /* ���������������һ����㷨������ȶ��Ĺ������� */
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
