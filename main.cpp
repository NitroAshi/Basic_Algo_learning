#include "BaseSort.h"
#include "BubbleSort.h"
#include "handleSort.h"

using namespace std;

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

    BubbleSort bubble(v);
    vector<int> sorted = handleSort(&bubble);

    cout << "Sorted array:" << endl;
    for(int i : sorted) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}