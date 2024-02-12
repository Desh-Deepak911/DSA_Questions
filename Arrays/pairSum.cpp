// WAP to find the elements in the array which when added give the result as S, taken as input
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

// Leetcode solution - 
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         int i,j;
//         for(i=0; i<nums.size(); i++) {
//             for(j=i+1; j<nums.size(); j++) {
//                 if (nums[i]+nums[j] == target) {
//                     ans.push_back(min(i, j));
//                     ans.push_back(max(i, j));
//                 }
//             }
//         }
//         return ans;
//     }
// };

vector<vector<int>> pairSum(vector<int>& input, int k, int size) {
    int i, j;
    vector<vector<int>> ans;
    vector<int> pair;
    sort(input.begin(), input.end());
    for(i=0;i<size;i++) {
        pair.empty();
        for(j=i+1; j<size;j++) {
            if(input[i] + input[j] == k) {
                pair.push_back(input[i]);
                pair.push_back(input[j]);
                ans.push_back(pair);
                break;
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main() {

    int size;
    string ques = "Enter the size of the array";
    cout << ques << endl;
    cin >> size;
    int arr[size];
    vector<int> input;
    ques = "Enter the elements of the array";
    cout << ques << endl;
    for (int i=0; i< size; i++) {
        cin >> arr[i];
        input.push_back(arr[i]);
    }

    ques = "Enter the sum value";
    cout << ques << endl;
    int k;
    cin >> k;

    pairSum(input, k, size);
    return 0;
}