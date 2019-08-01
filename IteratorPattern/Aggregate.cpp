#include "Aggregate.h"
#include "Iterator.h"

ListIterator * ListAggeragte::createIterator()
{
    return new ListIterator(this);
}
