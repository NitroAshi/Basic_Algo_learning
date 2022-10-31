#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "BaseSort.h"


class SelectionSort : public BaseSort
{
public:
    SelectionSort(vector<int> &v);
    virtual void _sort();
};

#endif // SELECTION_SORT_H
