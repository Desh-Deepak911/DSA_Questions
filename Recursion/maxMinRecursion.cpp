// WAP to find the maximum and minimum elements in an array using recursion
#include <iostream>
#include <vector>
using namespace std;

int recursiveMax(vector<int> v, int n, int maxi) {
    if(n==0) {
        return maxi;
    }
    if(v[n-1] > maxi) {
        maxi = v[n-1];
    }
    return recursiveMax(v, n-1, maxi);
}

int recursiveMin(vector<int> v, int n, int mini) {
    if(n==0) {
        return mini;
    }
    if(v[n-1] < mini) {
        mini = v[n-1];
    }
    return recursiveMin(v, n-1, mini);
}

int main() {
    vector<int> v = {123, 232, 221, 4, 123, 545, 22, 78, 12};
    int n = v.size();
    int maxim = INT_MIN;
    int minim = INT_MAX;
    int maxi = recursiveMax(v, n, maxim);
    int mini = recursiveMin(v, n, minim);
    cout << maxi << endl;
    cout << mini << endl;
}