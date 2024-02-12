/*
You are given an array 'arr' of size 'n' which denotes the position of stalls. You are also given an integer 'k' which denotes the number of aggressive cows. You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isPossibleDist(vector<int> stalls, int mid, int n, int m) {
    int cowsCount = 1;
    int lastPos = stalls[0];
    for(int i = 0; i < n; i++) {
        if(stalls[i]-lastPos <= mid) {  
            cowsCount++;
            if(cowsCount == m) {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int stallAllocation(vector<int> stalls, int n, int m) {
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int sum = 10;
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e) {
        if(isPossibleDist(stalls, mid, n, m)){
            ans = mid;
            s = mid+1;
        }
        else {
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main() {
    vector<int> stalls = {0,3,4,7,10,9};
    int m = 4;
    int n = 6;
    int result = stallAllocation(stalls, n, m);
    cout << result << endl;
}