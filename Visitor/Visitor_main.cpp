#include "Element.h"
#include "Visitor.h"

int main() {
    ElementA elea;
    ElementB eleb;
    VisitorI visi;
    VisitorII visii;

    elea.accept(&visi);  // double dispatch
    elea.accept(&visii);  // double dispatch

    return 0;
}
