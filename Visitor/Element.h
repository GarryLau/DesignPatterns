#pragma once

#include "Visitor.h"

#ifdef __cplusplus
extern "C" {
#endif

    class Visitor;
    class Element
    {
    public:
        ~Element() {}
        virtual void accept(Visitor *visitor) = 0;
    };

    class ElementA : public Element
    {
    public:
        virtual void accept(Visitor *visitor) override;
    };

    class ElementB : public Element
    {
    public:
        virtual void accept(Visitor *visitor) override;
    };

#ifdef __cplusplus
}
#endif