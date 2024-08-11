// WAP to count the occurences of a specific element in an array
#include <iostream>
#include <vector>
using namespace std;

int recursiveCount(vector<int> v, int n, int k, int count) {
    if(n==0) {
        return count;
    }
    if(v[n-1] == k) {
        count++;
    }
    return recursiveCount(v, n-1, k, count);
}

int main() {
    vector<int> v = {1, 2, 2, 2, 2, 2, 2, 3, 4, 4, 4, 5, 5, 6};
    int n = v.size();
    int k = 2;
    int count = 0;
    int totalCount = recursiveCount(v, n, k, count);
    cout << totalCount << endl;
}