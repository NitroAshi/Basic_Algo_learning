#include "SortAlgo.h"


int main()
{
    int num;
    vector<int> v;

    cout << "Unsorted array:" << endl;
    while(cin >> num) {
        v.push_back(num);
        if(cin.get() == '\n') {
            break;
        }
    }
    SortAlgo tmp(v);
    v = tmp.BubbleSort();

    cout << "Sorted array:" << endl;
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}