#include "BaseSort.h"
#include "handleSort.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"

using namespace std;

int main()
{
    int num;
    vector<int> input_v;

    cout << "Unsorted array:" << endl;
    while(cin >> num) {
        input_v.push_back(num);
        if(cin.get() == '\n') {
            break;
        }
    }

    QuickSort bubble(input_v);
    vector<int> res = handleSort(&bubble);

    cout << "Sorted array:" << endl;
    for(int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}