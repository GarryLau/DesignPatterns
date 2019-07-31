#pragma once

#include "Stack.h"

class StackIterator
{
public:
    StackIterator(Stack *st) {
        m_stack = st;
    }
    /* 初始化迭代器，使当前元素指向第一个元素 */
    void first() {
        m_index = 0;
    }
    /* 将当前元素指针向前推进一步，指向下一个元素 */
    void next() {
        m_index++;
    }
    /* 检查 */
    bool isDone() {
        return m_stack->m_current + 1 == m_index;
    }
    /* 返回当前元素 */
    int currentElement() {
        return m_stack->m_arr[m_index];
    }

private:
    const Stack *m_stack;
    int m_index;
};
