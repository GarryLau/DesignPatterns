#include "Element.h"
#include "Visitor.h"

int main() {
    ElementA elea;
    ElementB eleb;
    VisitorI visi;
    VisitorII visii;

    elea.accept(&visi);
    elea.accept(&visii);


    return 0;
}