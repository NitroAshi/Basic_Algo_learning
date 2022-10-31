#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "BaseSort.h" 

class InsertionSort : public BaseSort
{
public:
    InsertionSort(vector<int> &v);
    virtual void _sort();
};

#endif // INSERTION_SORT_H