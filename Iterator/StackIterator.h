#pragma once

#include "Stack.h"

class StackIterator
{
public:
    StackIterator(Stack *st) {
        m_stack = st;
    }
    /* ��ʼ����������ʹ��ǰԪ��ָ���һ��Ԫ�� */
    void first() {
        m_index = 0;
    }
    /* ����ǰԪ��ָ����ǰ�ƽ�һ����ָ����һ��Ԫ�� */
    void next() {
        m_index++;
    }
    /* ��� */
    bool isDone() {
        return m_stack->m_current + 1 == m_index;
    }
    /* ���ص�ǰԪ�� */
    int currentElement() {
        return m_stack->m_arr[m_index];
    }

private:
    const Stack *m_stack;
    int m_index;
};
