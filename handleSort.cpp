#include "handleSort.h"

using namespace std;


vector<int> handleSort(BaseSort *psort) {
    psort -> _sort();
    return psort -> _getData();
}