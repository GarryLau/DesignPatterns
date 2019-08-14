#pragma once

#include <iostream>

class SearchBehavior
{
public:
    ~SearchBehavior() = default;
    virtual void search() = 0;
};

class SequentialSearch : public SearchBehavior
{
public:
    virtual void search() override {
        std::cout << "Using SequentialSearch." << std::endl;
    }
};

class BinaryTreeSearch : public SearchBehavior
{
public:
    virtual void search() override {
        std::cout << "Using BinaryTreeSearch." << std::endl;
    }
};

class HashTableSearch : public SearchBehavior
{
public:
    virtual void search() override {
        std::cout << "Using HashTableSearch." << std::endl;
    }
};