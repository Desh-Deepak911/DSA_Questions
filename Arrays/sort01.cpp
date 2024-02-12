/*
Given an array nums with n objects colored red, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red and blue.
We will use the integers 0, 1, and 2 to represent the color red, and blue, respectively.
You must solve this problem without using the library's sort function.
*/
#include <iostream>
#include <vector>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

vector<int> sortZeroOne(vector<int>& a) {
    int i, j;
    i=0;
    j=a.size()-1;
    while(i<j) {
        if(a[i] == 0 && a[j] == 1) {
            i++;
            j--;
        }
        else if(a[i] == 1 && a[j] == 0) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        else if(a[j] == 0){
            i++;
        }
        else {
            j--;
        }
    }
    return a;
}

int main() {
    vector<int> arr = {0, 1, 0, 1, 1, 0, 0, 0};
    vector<int> result;

    result = sortZeroOne(arr);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    cout << endl;
}