// WAP to print out the pivot index in an array
// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int accumulate(vector<int> &section, int begin, int end)
{
    int sum = 0;
    for (int i = begin; i <= end; i++)
    {
        sum += section[i];
    }
    if(sum < 0) {
        return sum*(-1);
    }
    return sum;
}
int pivotIndex(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    int pivot = -1;
    while (start <= end)
    {
        int leftSum = accumulate(nums, 0, mid-1);
        int rightSum = accumulate(nums, mid + 1, nums.size() - 1);
        if (leftSum == rightSum)
        {
            pivot = mid;
            return pivot;
        }
        else if (leftSum < rightSum)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return pivot;
}

int main() {
    vector<int> nums = {-1, -1, -1, -1, 0, 1};
    pivotIndex(nums);
}