#pragma once

#include <iostream>

class SortBehavior
{
public:
    ~SortBehavior() = default;
    virtual void sort() = 0;
};

class HeapSort : public SortBehavior
{
public:
    virtual void sort() override {
        std::cout << "Using HeapSort." << std::endl;
    }
};

class QuickSort : public SortBehavior
{
public:
    virtual void sort() override {
        std::cout << "Using QuickSort." << std::endl;
    }
};

class MergeSort : public SortBehavior
{
public:
    virtual void sort() override {
        std::cout << "Using MergeSort." << std::endl;
    }
};
