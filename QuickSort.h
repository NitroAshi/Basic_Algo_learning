#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include "BaseSort.h"

class QuickSort : public BaseSort
{
public:
    QuickSort(vector<int> &v);
    virtual void _sort();
    void _quicksort(vector<int> &u, int start, int end);
    int _partition(vector<int> &u, int start, int end);
};

#endif // QUICK_SORT_H