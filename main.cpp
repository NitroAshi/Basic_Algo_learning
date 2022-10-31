#include "BaseSort.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "handleSort.h"

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

    // BubbleSort bubble(input_v);
    // vector<int> res = handleSort(&bubble);
    SelectionSort selection(input_v);
    vector<int> res = handleSort(&selection);

    cout << "Sorted array:" << endl;
    for(int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}