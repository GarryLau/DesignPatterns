#include "StackIterator.h"
#include <iostream>

int main() {
    Stack ast;
    for (int i = 0; i != SIZE; ++i)
    {
        ast.push(i);
    }

    std::cout << "isEmpty: " << ast.isEmpty() << std::endl;

#if 0
    for (int i = 0; i != SIZE;++i)
    {
        std::cout << ast.pop() << std::endl;
    }
#endif

    StackIterator *stiter = new StackIterator(&ast);
    for (stiter->first(); !stiter->isDone(); stiter->next())
    {
        std::cout << stiter->currentElement() << std::endl;
    }

    std::cout << "isEmpty: " << ast.isEmpty() << std::endl;

    return 0;
}