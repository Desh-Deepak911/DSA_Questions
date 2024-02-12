// WAP to find the intersection betwenn two sorted arrrays
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0;
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        while(i< n && j < m) {
            if(nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j]) {
                j++;
            }
            else {
                i++;
            }
        }
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }

int main() {

    int n;
    string ques = "Enter the size of the first array";
    cout << ques << endl;
    cin >> n;
    vector<int> arr;
    ques = "Enter the elements of the first array";
    cout << ques << endl;
    for (int i=0; i< n; i++) {
        cin >> arr[i];
    }
    int m;
    cout << ques << endl;
    cin >> m;
    vector<int> arr2;
    ques = "Enter the elements of the second array";
    cout << ques << endl;
    for (int i=0; i< m; i++) {
        cin >> arr[i];
    }

    intersection(arr, arr2);
}