// WAP to print top K element in the list

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    vector<int> nums = {1,2,2,2,3,3,3};
    int n = nums.size();
    vector<vector<int>> bucket(n);
    vector<int> result;
    int k = 2;


    unordered_map<int, int> map;
    for(int i=0; i<nums.size(); i++) {
        map[nums[i]]++;
    }

    for(auto i: map) {
        bucket[i.second].push_back(i.first);
    }

    // for(int i=0; i<bucket.size(); i++) {
    //     cout << "Index" << i << endl;
    //     for(int j=0; j<bucket[i].size(); j++) {

    //         cout << "Frequency" << bucket[i][j];
    //     }
    //     cout << endl;
    // }

    for(int i=bucket.size()-1; i>=0; i--) {
        if(bucket[i].size() > 0) {
            for(int j=0; j<bucket[i].size(); j++) {
                result.push_back(bucket[i][j]);
                if(result.size() == k) {
                    break;
                }
            }
        }
    }

}