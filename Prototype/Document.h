#ifndef _DOCUMENT_H_
#define _DOCUMENT_H_

#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

    typedef enum CATEGORY
    {
        XML = 0,
        JSON = 1,
        SPREADSHEET = 2
    }Category;

    class Document
    {
    public:
        Document() = default;
        ~Document() = default;
        virtual Document *clone() = 0;
        virtual Category typeValue() = 0;
        virtual void store() = 0;
    };

    class xmlDocument : public Document
    {
        Document *clone() override
        {
            return new xmlDocument;
        }
        Category typeValue() override {
            return Category::XML;
        }
        void store() override
        {
            std::cout << "xmlDocument" << std::endl;
        }
    };


    class jsonDocument : public Document
    {
        Document *clone() override {
            return new jsonDocument;
        }
        Category typeValue() override {
            return Category::JSON;
        }
        void store() override {
            std::cout << "jsonDocument" << std::endl;
        }
    };


    class spreadsheetDocument : public Document
    {
        Document *clone()
        {
            return new spreadsheetDocument;
        }
        Category typeValue() override {
            return Category::SPREADSHEET;
        }
        void store()
        {
            std::cout << "spreadsheetDocument" << std::endl;
        }
    };


#ifdef __cplusplus
}
#endif
#endif