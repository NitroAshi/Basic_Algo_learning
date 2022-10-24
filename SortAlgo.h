#include <iostream>
#include <vector>

using namespace std;

class SortAlgo
{
public:
    SortAlgo();
    ~SortAlgo();
    void BubbleSort(vector<int> &v);
    void InsertionSort(vector<int> &v);
    void SelectionSort(vector<int> &v);
    void MergeSort(vector<int> &v);
    void QuickSort(vector<int> &v);
    void HeapSort(vector<int> &v);
    void Print(vector<int> &v);
};