#include <iostream>
#include <vector>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement - Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
*/

// Optimised Solution 1: Using hashset to find the triplets

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        int i, j, k;
        for(i=0; i< nums.size(); i++){
            set<int> hashset;
            for(j=i+1; j< nums.size(); j++) {
                int third = -(nums[i] + nums[j]);
                if(hashset.find(third) != hashset.end()){
                    vector<int> temp;
                    temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

// Optimization Solution 2 - Using 2 pointer approach (Less time and space complexity)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int i, j, k;
        sort(nums.begin(), nums.end());
        for(i=0; i< nums.size(); i++) {
            if(i>0 && nums[i] == nums[i-1]) continue;
            j = i+1;
            k = nums.size() - 1;
            while (j<k) {
                if(nums[i]+nums[j]+nums[k] < 0){
                    j++;
                }
                else if(nums[i]+nums[j]+nums[k] > 0) {
                    k--;
                }
                else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};