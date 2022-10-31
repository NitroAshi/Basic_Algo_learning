#include "InsertionSort.h"

using namespace std;

InsertionSort::InsertionSort(vector<int> &v)
: BaseSort(v) {}

void InsertionSort::_sort() {
    for (int i = 1; i < _arr.size(); ++i) {
        int pivot = _arr[i];
        for (int j = i - 1; j >= 0; --j) {
            if (_arr[j] > pivot) {
                _arr[j+1] = _arr[j];
                _arr[j] = pivot;
            }
            else
                break;
        }
    }
}