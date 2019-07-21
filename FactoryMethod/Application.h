#pragma once

#include "Document.h"

#define MAX_DOCU_NUM (10)

class Application
{
public:
    Application() : m_num(0) {
        std::cout << "Application constructor called." << std::endl;
    }
    ~Application() = default;
    void NewDocument(std::string name) {
        m_docu[m_num] = CreateDocument(name);
        m_docu[m_num]->Open();
        m_docu[m_num++]->Close();
        std::cout << "New Document called." << std::endl;
    }
    void ShowInfo() {
        for (int i = 0; i != m_num; ++i) {
            std::cout << m_docu[i]->GetName() << std::endl;
        }
    }
private:
    /* CreateDocument是一个工厂方法，因为它负责“生产”一个对象 */
    virtual Document *CreateDocument(std::string name) = 0;
private:
    int m_num;
    Document *m_docu[MAX_DOCU_NUM];
};

class WordApplication : public Application
{
    WordDocument * CreateDocument(std::string name) override {
        std::cout << "Word CreateDocument() called." << std::endl;
        return new WordDocument(name);
    }
};

class ExcelApplication : public Application
{
    ExcelDocument *CreateDocument(std::string name) override {
        std::cout << "Excel CreateDocument() called." << std::endl;
        return new ExcelDocument(name);
    }
};

