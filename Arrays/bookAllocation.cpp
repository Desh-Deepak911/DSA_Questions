/*
Given an array of integers A of size N and an integer B. College library has N bags, the ith book has A[i] number of pages. You have to allocate books to B number of students so that the maximum number of pages allocated to a student is minimum. A book will be allocated to exactly one student.
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isPossibleSoln(vector<int> arr, int mid, int m) {
    int pageSum = 0;
    int studentCount = 1;
    for(int i = 0; i<arr.size(); i++) {
        if(pageSum +arr[i] <= mid){
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if(studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int bookAllocation(vector<int> arr, int n, int m) {
    int start = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum+=arr[i];
    }
    int ans = -1;
    int end = sum;
    int mid = start + (end-start)/2;
    while(start <=end) {
        if(isPossibleSoln(arr, mid, m)) {
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main() {
    vector<int> books ={10, 20, 30, 40};
    int m = 2;
    int result = bookAllocation(books, 4, m);
    cout << result << endl;
}