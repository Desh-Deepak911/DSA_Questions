/*
Given are N boards of with length of each given in the form of array, and K painters, such that each painter takes 1 unit of time to paint 1 unit of the board. The task is to find the minimum time to paint all boards under the constraints that any painter will only paint continuous sections of boards, say board {2, 3, 4} or only board {1} or nothing but not board {2, 4, 5}.
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> walls, int mid, int m, int n) {
    int painterCount = 1;
    int wallsSum = 0;
    for(int i = 0; i < n; i++) {
        if(wallsSum + walls[i] <= mid){
            wallsSum += walls[i];
        }
        else {
            painterCount++;
            if(painterCount > m || walls[i] > mid){
                return false;
            }
            wallsSum = walls[i];
        }
    }
    return true;
}

int wallsAllocated(vector<int> walls, int n, int m) {
    int s = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=walls[i];
    }
    int e = sum;
    int ans = -1;
    int mid=s + (e-s)/2;
    while (s<=e) {
        if(isPossible(walls, mid, m, n)) {
            ans = mid;
            e = mid-1;
        }
        else {
            s = s+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main() {
    vector<int> walls = {10, 15, 15, 30};
    int m = 2;
    int result = wallsAllocated(walls, 4, m);
    cout << result << endl;
}