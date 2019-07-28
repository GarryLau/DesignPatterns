#pragma once

#include <string>
#include <iostream>

class Pizza
{
public:
    Pizza() = default;
    ~Pizza() = default;
    /* �������������������еĹ���һ����ɵģ���������һ���������޷�û������ģ�
       ��˽������������������ó�protected */
    void setDough(const std::string &dough) {
        m_dough = dough;
    }
    void setTopping(const std::string &topping) {
        m_topping = topping;
    }
    void showPizzaDetail() {
        std::cout << "Pizza with: " << m_dough << " & " << m_topping << std::endl;
    }
private:
    std::string m_dough;
    std::string m_topping;
};
