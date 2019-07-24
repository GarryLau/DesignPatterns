#ifndef _DOCUMENT_MANAGER_H_
#define _DOCUMENT_MANAGER_H_

#include "Document.h"

#ifdef __cplusplus
extern "C" {
#endif

#define CATEGORY_NUM (3)

    class DomumentManager
    {
    public:
        static Document * makeDocument(Category cate) {
            return m_doc_type[cate]->clone();
        }
    private:
        /* 基类指针数组 */
        static Document *m_doc_type[CATEGORY_NUM];
    };

    /* for_each op */
    struct Destruct
    {
        void operator()(Document *pdoc) {
            delete pdoc;
        }
    };

#ifdef __cplusplus
}
#endif
#endif