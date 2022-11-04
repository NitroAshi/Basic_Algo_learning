#ifndef HEAP_SORT_H
#define HEAP_SORT_H

#include "BaseSort.h"

class HeapSort : public BaseSort
{
public:
    HeapSort(vector<int> &v);
    virtual void _sort();
    void _build_max_heap(vector<int> &u);
    void _heapify(vector<int> &w, int i, int length);
};

#endif // HEAP_SORT_H
