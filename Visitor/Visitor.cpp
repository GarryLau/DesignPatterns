#include "Visitor.h"


void VisitorI::visitElementA(ElementA *element) {
    std::cout << "VisitorI is processing ElementA." << std::endl;
}
void VisitorI::visitElementB(ElementB *element) {
    std::cout << "VisitorI is processing ElementB." << std::endl;
}


void VisitorII::visitElementA(ElementA *element) {
    std::cout << "VisitorII is processing ElementA." << std::endl;
}
void VisitorII::visitElementB(ElementB *element) {
    std::cout << "VisitorII is processing ElementB." << std::endl;
}
