#include "SelectionSort.h"

using namespace std;


SelectionSort::SelectionSort(vector<int> &v) 
: BaseSort(v) {}

void SelectionSort::_sort() {
    int min_index;
    for (int i = 0; i < _arr.size() - 1; ++i) {
        min_index = i;
        for (int j = i + 1; j < _arr.size(); ++j) {
            if (_arr[j] < _arr[min_index]) {
                min_index = j;
            }
        }
        if (i != min_index) {
            swap(_arr[i], _arr[min_index]);
        }
    }
}


