#include "SortAlgo.h"


SortAlgo::SortAlgo(vector<int> &v)
{
    arr = move(v);
    // for (int i : v) {
    //     cout << i << " ";
    // }
}

vector<int> SortAlgo::BubbleSort()
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}
