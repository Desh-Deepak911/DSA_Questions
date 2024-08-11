// WAP to print the array elements in the reverse order.
#include <iostream>
#include <vector>
using namespace std;

void recursiveReverse(vector<int> v, int n) {
    if(n == 0) {
        return;
    }
    recursiveReverse(v, n-1);
    cout << v[n-1] << endl;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    recursiveReverse(v, n);
}