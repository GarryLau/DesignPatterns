#ifndef _MEMENTO_H_
#define _MEMENTO_H_

#include <iostream>

#ifdef  __cplusplus
extern "C" {
#endif //  __cplusplus

    class Memento
    {
    public:
        Memento(int num) : m_num(num) {
            std::cout << "Memento ctor called." << std::endl;
        }
    private:
        int m_num;
        friend class Number;
    };

#ifdef  __cplusplus
}
#endif //  __cplusplus
#endif