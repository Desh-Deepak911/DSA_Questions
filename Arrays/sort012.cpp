// WAP to sort 0, 1 and 2 values in the array without the library function
#include <iostream>
#include <vector>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

vector<int> sortZeroOneTwo(vector<int>& a) {

}

int main() {

    vector<int> arr = {0, 2, 0, 1, 0, 2, 0, 1, 1, 2, 0, 0, 0, 2, 0};
    vector<int> result;

    result = sortZeroOneTwo(arr);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    cout << endl;

}