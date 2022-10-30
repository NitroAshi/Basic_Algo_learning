#ifndef BASE_SORT_H
#define BASE_SORT_H


#include <iostream>
#include <vector>

using namespace std;

class BaseSort
{
public:
    BaseSort(vector<int> &v);
    virtual void _sort() = 0;
    vector<int> _getData();

protected:
    vector<int> _arr;
};


#endif // BASE_SORT_H
