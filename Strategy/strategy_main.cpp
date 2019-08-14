#include "Collection .h"

int main() {
    QuickSort quicksort;
    HeapSort heapsort;
    MergeSort meargesort;

    Collection context;

    context.setSort(&meargesort);
    context.runSort();

    SequentialSearch sequential_search;
    BinaryTreeSearch binary_tree_search;
    HashTableSearch hash_table_search;

    context.setSearch(&hash_table_search);
    context.runSearch();

    return 0;
}