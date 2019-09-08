#pragma once

#include <iostream>
#include "Element.h"

#ifdef __cplusplus
extern "C" {
#endif

    class ElementA;
    class ElementB;

    class Visitor
    {
    public:
        ~Visitor() {}
        virtual void visitElementA(ElementA *element) = 0;
        virtual void visitElementB(ElementB *element) = 0;
    };

    class VisitorI : public Visitor
    {
    public:
        virtual void visitElementA(ElementA *element) override;
        virtual void visitElementB(ElementB *element) override;
    };

    class VisitorII : public Visitor
    {
    public:
        virtual void visitElementA(ElementA *element) override;
        virtual void visitElementB(ElementB *element) override;
    };

#ifdef __cplusplus
}
#endif