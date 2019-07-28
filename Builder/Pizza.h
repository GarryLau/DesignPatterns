#pragma once

#include <string>
#include <iostream>

class Pizza
{
public:
    Pizza() = default;
    ~Pizza() = default;
    /* 整个披萨的制作是所有的工序一起完成的，单独调用一个方法是无法没有意义的，
       因此将披萨的制作方法设置成protected */
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
