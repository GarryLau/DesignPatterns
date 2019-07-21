#pragma once

#include <string>
#include <iostream>

class Document
{
public:
    Document(std::string name) : m_name(name){
        std::cout << "Document constructor called." << std::endl;
    }
    ~Document() = default;
    virtual void Open() = 0;
    virtual void Close() = 0;
    std::string &GetName() {
        return m_name;
    }
private:
    std::string m_name;
};

class WordDocument : public Document
{
public:
    WordDocument(std::string name) : Document(name) {
        std::cout << "WordDocument constructor called." << std::endl;
    }
    ~WordDocument() = default;
    void Open() override {
        std::cout << "Word Document Open()." << std::endl;
    }
    void Close() override {
        std::cout << "Word Document Close()." << std::endl;
    }
};

class ExcelDocument : public Document
{
public:
    ExcelDocument(std::string name): Document(name) {
        std::cout << "Excel Document constructor called." << std::endl;
    }
    ~ExcelDocument() = default;
    void Open() override {
        std::cout << "Excel Document Open()." << std::endl;
    }
    void Close() override {
        std::cout << "Excel Document Close()." << std::endl;
    }
};
