#pragma once

#include "Aggregate.h"
#include <iostream>
class Iterator
{
public:
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool isDone() const = 0;
    virtual int currentItem() const = 0;
};

class ListIterator : public Iterator
{
public:
    ListIterator(const ListAggeragte *alist) {
        m_list_agg = alist;
        m_current = 0;
    }
    ~ListIterator() {
        std::cout << "Destructor called." << std::endl;
    }
    virtual void First() override{
        m_current = 0;
    }
    virtual void Next() override {
        ++m_current;
    }
    virtual bool isDone() const override{
        return m_current >= m_list_agg->getCount();
    }
    virtual int currentItem() const override {
        return m_list_agg->getValue(m_current);
    }
private:
    const ListAggeragte * m_list_agg;
    int m_current;
};
