#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include "BaseSort.h"


class BubbleSort : public BaseSort
{
public:
    BubbleSort(vector<int> &v);
    virtual void _sort();
};

#endif // BUBBLE_SORT_H
