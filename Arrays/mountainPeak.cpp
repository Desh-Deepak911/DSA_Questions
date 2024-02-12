// The problem usually involves finding the peak element in an array, where an element is greater than or equal to its neighbors. WAP to find the mountain peak
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void mountainPeak(vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end-start) / 2;
    while(start < end) {
        if(nums[mid] < nums[mid+1]) {
            start = mid+1;
        }
        else {
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    cout << "The peak of the mountain is at index " << start << "and the element is " << nums[start] << endl;
}

int main() {
    vector<int> nums = {3, 5, 3, 2, 0};
    mountainPeak(nums);
}