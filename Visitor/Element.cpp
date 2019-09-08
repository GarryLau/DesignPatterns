#include "Element.h"


void ElementA::accept(Visitor *visitor) {
    visitor->visitElementA(this);
}

void ElementB::accept(Visitor *visitor) {
    visitor->visitElementB(this);
}
