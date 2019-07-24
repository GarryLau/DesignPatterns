#include "DocumentManager.h"
#include <vector>
#include <algorithm>    // std::for_each

/* 一个子类的实例是一个原型，m_doc_type数组里共有CATEGORY_NUM个原型 */
Document * DomumentManager::m_doc_type[CATEGORY_NUM] = {new xmlDocument, new jsonDocument, new spreadsheetDocument };

int main()
{
    std::vector<Document*> vecdoc(CATEGORY_NUM);

    Category cate = XML;
    vecdoc[0] = DomumentManager::makeDocument(cate);
    cate = Category::JSON;
    vecdoc[1] = DomumentManager::makeDocument(cate);
    cate = Category::SPREADSHEET;
    vecdoc[2] = DomumentManager::makeDocument(cate);
    
    for (int i = 0; i != CATEGORY_NUM; ++i)
    {
        vecdoc[i]->store();
    }

    Destruct destruct;
    std::for_each(vecdoc.begin(), vecdoc.end(), destruct);

    return 0;
}