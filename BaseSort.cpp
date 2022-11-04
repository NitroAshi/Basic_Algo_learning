#include "BaseSort.h"


BaseSort::BaseSort(vector<int> &v) {
    _arr = move(v);
}

vector<int> BaseSort::_getData() const{
    return _arr;
}
