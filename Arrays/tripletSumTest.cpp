#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void printVector(vector<vector<int>>& vec) {
    for (int i = 0; i < vec.size(); i++) { 
        for (int j = 0; j < vec[i].size(); j++) 
            cout << vec[i][j] << " "; 
        cout << endl; 
    } 
}

vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> result;
    int i = 0, j, k;
    sort(nums.begin(), nums.end());
    for(i=0; i< nums.size(); i++) 
    {
        if(i>0 && nums[i] == nums[i-1]) continue;
        j = i + 1;
        k = nums.size() - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0)
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                result.push_back(temp);
                j++; k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
            else if (sum < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return result;
}

int main() {
    vector<int> test = {-2, -2, -2, -1, -1, 0, 0, 0, 2, 2};
    vector<vector<int>> result = threeSum(test);
    printVector(result);
}