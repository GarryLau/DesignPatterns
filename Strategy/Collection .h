#pragma once

#include <iostream>
#include "SortBehavior .h"
#include "SearchBehavior .h"

/* Context */
class Collection
{
public:
    Collection() {
        m_sort = nullptr;
        m_search = nullptr;
    }
    void setSort(SortBehavior *sort) {
        m_sort = sort;
    }
    void setSearch(SearchBehavior *search) {
        m_search = search;
    }
    void runSort() {
        m_sort->sort();
    }
    void runSearch() {
        m_search->search();
    }
private:
    SortBehavior *m_sort;
    SearchBehavior *m_search;
};