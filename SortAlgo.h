#include <iostream>
#include <vector>

using namespace std;

class SortAlgo
{
public:
    SortAlgo(vector<int> &v);
    vector<int> BubbleSort();
    void InsertionSort();
    void SelectionSort();
    void MergeSort();
    void QuickSort();
    void HeapSort();
    void Print();

private:
    vector<int> arr;
};