#include "BubbleSort.h"

using namespace std;


BubbleSort::BubbleSort(vector<int> &v) 
: BaseSort(v) {}

void BubbleSort::_sort() {
    for (int i = 0; i < _arr.size() - 1; ++i) {
        for (int j = 0; j < _arr.size() - i - 1; ++j) {
            if (_arr[j] > _arr[j + 1]) {
                swap(_arr[j], _arr[j + 1]);
            }
        }
    }
}


