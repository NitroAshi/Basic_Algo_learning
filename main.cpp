#include "SortAlgo.h"

const char cinTerminator = '\n';

int main()
{
    int num;
    vector<int> v;
    cout << "unsorted array:" << endl;
    while ((cin >> num) && num != cinTerminator) {
        v.push_back(num);
    }

    cout << "Elements into vector: " << endl;
    // print vector
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
    // vector<int> v = { 5, 4, 3, 2, 1 };
    // SortAlgo sa;
    // sa.BubbleSort(v);
    // sa.Print(v);
    // return 0;
}