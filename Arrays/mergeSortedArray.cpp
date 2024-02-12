// WAP too merge two sorted arrays into one sorted array
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void mergeSortedArrays(vector<int> v1, vector<int> v2) {
    int n = v1.size();
    int m = v2.size();

    vector<int> merge;
    int i=0, j=0;
    while(i<n && j<m) {
        if(v1[i] > v2[j]) {
            merge.push_back(v2[j]);
            j++;
        }
        else if(v1[i] < v2[j]) {
            merge.push_back(v1[i]);
            i++;
        }
        else {
            merge.push_back(v1[i]);
            i++;j++;
        }
    }
    if(j==m) {
        while (i<n) {
            merge.push_back(v1[i]);
            i++;    
        } 
    }
    else {
        while (j<m) {
            merge.push_back(v2[j]); 
            j++;
        }
    }
    for(i=0; i<merge.size() ; i++) {
        cout << merge[i] << "  ";
    }

}

int main() {
    vector<int> v1 = {2, 7, 8, 9, 10, 11, 12};
    vector<int> v2 = {1, 4, 6, 10, 13, 15, 16, 17, 18, 20};
    mergeSortedArrays(v1, v2);
}