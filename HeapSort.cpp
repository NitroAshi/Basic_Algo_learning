#include "HeapSort.h"

HeapSort::HeapSort(vector<int> &v)
: BaseSort(v) {}

void HeapSort::_sort() {
    _build_max_heap(_arr);

    int len = _arr.size();
    for (int i = _arr.size() - 1; i > 0; --i) {
        swap(_arr[0], _arr[i]);
        len --;
        _heapify(_arr, 0, len);   
    }
}

void HeapSort::_build_max_heap(vector<int> &u) {
    int len_u = u.size();
    for (int i = len_u / 2; i >= 0; --i) {
        _heapify(u, i, len_u);
    }
}

void HeapSort::_heapify(vector<int> &w, int i, int length) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if (left < length && w[left] > w[largest]) {
        largest = left;
    }

    if (right < length && w[right] > w[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(w[i], w[largest]);
        _heapify(w, largest, length); // Because of Level Order Traversal
    }
}