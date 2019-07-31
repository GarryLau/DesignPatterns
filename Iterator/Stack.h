#pragma once
#include <exception>
#include <iostream>

#define SIZE (10)

class Stack
{
    friend class StackIterator;
public:
    Stack() {
        m_current = -1;
    }
    void push(int a) {
        if (m_current >= SIZE-1) {
            throw("Stack is too full to add an element!");
        }
        m_arr[++m_current] = a;
    }
    int pop() {
        if (m_current <= -1)
        {
            throw("Empty stack cannot pop any elements!");
        }
        return m_arr[m_current--];
    }
    bool isEmpty() {
        return -1 == m_current;
    }
    StackIterator *createIterator();
private:
    int m_arr[SIZE];
    int m_current;
};
