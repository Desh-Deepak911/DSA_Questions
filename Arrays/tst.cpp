#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int mid, int m) {
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0; i<arr.size(); i++) {
        if(pageSum+arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            } 
            pageSum = arr[i];
        }
    }
    return true;
}

int booksAllocation(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum+=arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<e) {
        if(isPossible(arr,mid, m)) {
            ans = mid;
            e = mid-1;
        }
        else {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    vector<int> books={10, 20, 30, 40};
    int n = 4;
    int m = 2;
    int result = booksAllocation(books, n, m);
    cout << result << endl;
}