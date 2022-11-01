#include "QuickSort.h"

QuickSort::QuickSort(vector<int> &v)
: BaseSort(v) {}

void QuickSort::_sort() {
    _quicksort(_arr, 0, _arr.size()-1); // important
}

void QuickSort::_quicksort(vector<int> &u, int start, int end) {
    if (start >= end) return;
    int pivot_i = _partition(u, start, end);
    _quicksort(u, start, pivot_i - 1);
    _quicksort(u, pivot_i + 1, end);
}

int QuickSort::_partition(vector<int> &w, int start, int end) {
    int pivot = w[start];
    while (start < end) {
        while (start < end && w[end] >= pivot) --end;
        w[start] = w[end];
        while (start < end && w[start] <= pivot) ++start;
        w[end] = w[start];
    }
    w[start] = pivot;
    return start;
}