#ifndef _NUMBER_H_
#define _NUMBER_H_

#include <iostream>
#include "Memento.h"

#ifdef  __cplusplus
extern "C" {
#endif //  __cplusplus

    class Number
    {
    public:
        Number(int val) : m_val(val) {
            std::cout << "Number ctor called." << std::endl;
        }
        void showValue() {
            std::cout << "m_val: " << m_val << std::endl;
        }
        void doDouble() {
            m_val *= 2;
        }
        void doHalf() {
            m_val /= 2;
        }
        Memento *createMemento() {
            return new Memento(m_val);
        }
        void reinstateMemento(Memento *memento) {
            m_val = memento->m_num;
        }

    private:
        int m_val;
    };

#ifdef  __cplusplus
}
#endif //  __cplusplus
#endif