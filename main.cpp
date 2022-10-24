#include "SortAlgo.h"

const char cinTerminator = '\n';

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

    cout << "Sorted array:" << endl;
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}