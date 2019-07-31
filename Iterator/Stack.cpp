#include "Stack.h"
#include "StackIterator.h"

StackIterator* Stack::createIterator() {
    return new StackIterator(this);
}