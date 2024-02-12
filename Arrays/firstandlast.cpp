// WAP to print out the first and last occurences of an element in a sorted array
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int firstOccurence(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end-start)/2;
        int first = -1;
        while(start <= end) {
            if(nums[mid] == target) {
                first = mid;
                end = mid-1;
            }
            else if(nums[mid] > target) {
                end = mid-1;
            }
            else {
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return first;
    }
    int lastOccurence(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() -1;
        int mid = start + (end-start)/2;
        int last = -1;
        while(start <= end) {
            if(nums[mid] == target) {
                last = mid;
                start = mid+1;
            }
            else if(nums[mid] > target) {
                end = mid-1;
            }
            else {
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> temp ={firstOccurence(nums, target), lastOccurence(nums, target)};
        return temp;
    }

int main() {
    // int size;
    // string ques = "Enter the size of the array";
    // cout << ques << endl;
    // cin >> size;
    // int arr[size];
    // ques = "Enter the elements of the array";
    // cout << ques << endl;
    // for (int i=0; i< size; i++) {
    //     cin >> arr[i];
    // }

    // ques = "Enter the element to be searched";
    // cout << ques << endl;
    // int k;
    // cin >> k;
    vector<int> arr = {0, 1, 2, 2, 2, 3, 4};
    int size = 7;
    int k = 2;
    vector<int> result;

    for(int i=0; i< result.size(); i++) {
        cout << result[i] << endl;
    }
}