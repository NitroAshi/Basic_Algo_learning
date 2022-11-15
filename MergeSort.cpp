#include "MergeSort.h"

MergeSort::MergeSort(vector<int> &v)
: BaseSort(v) {}

void MergeSort::_sort() {
    _divide_and_conquer(_arr, 0, _arr.size()-1); 
}

void MergeSort::_divide_and_conquer(vector<int> &u, int start, int end) {
    if (start >= end) return;
    int mid =  (start + end) / 2;
    _divide_and_conquer(u, start, mid);
    _divide_and_conquer(u, mid+1, end);
    _merge(u, start, end, mid);
//    if (start < end) {
//        int mid = (start + end) / 2;
//        _divide_and_conquer(u, start, mid);
//        _divide_and_conquer(u, mid+1, end);
//        _merge(u, start, end, mid);
//    }
}

void MergeSort::_merge(vector<int> &w, int start, int end, int mid) {
    vector<int> tmp(end - start + 1);
    int i = start;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= end) {
        tmp[k++] = (w[i] <= w[j]) ? w[i++] : w[j++];
    }

    while (i <= mid) {
        tmp[k++] = w[i++];
    }

    while (j <= end) {
        tmp[k++] = w[j++];
    }

    for (i = 0; i < k; ++i) {
        w[start + i] = tmp[i];        
    }
}
