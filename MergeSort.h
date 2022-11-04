#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include "BaseSort.h"

class MergeSort : public BaseSort
{
public:
    MergeSort(vector<int> &v);
    virtual void _sort();
    void _divide_and_conquer(vector<int> &u, int start, int end);
    void _merge(vector<int> &u, int start, int end, int mid);
};

#endif // MERGE_SORT_H
