// WAP to merge two sorted arrays into the first array itself
/*
For example, arr1[] = {1, 2, 3, 0, 0, 0}; '0' denotes the empty spaces in the first array
arr2[] = {2, 4, 6};
I have to merge the two arrays into arr1 and use the empty spaces to add elements of arr2
*/
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void mergeSortedArraysIntoFirst(vector<int> v1, vector<int> v2, int v1Size, int v2Size) {
    int n = v1Size;
    int m = v2Size;
    int i=0, j=0;
    while(i<n-m && j<m) {
        if(v1[i] >= v2[j]) {
            int temp = v2[j];
            int k = n-m-1;
            while(k>= i) {
                v1[k+1] = v1[k];
                k--;
            }
            v1[i] = temp;
            j++;
        }
        else if(v1[i] < v2[j] ) {
            i++;
        }
    }
    cout << i << " " <<  j << endl;
    if(i == n-m) {
        i+=j;
        while(j<m) {
            v1[i++] = v2[j++];
        }
    }
    for(i=0; i<n ; i++) {
        cout << v1[i] << "  ";
    }
}

int main() {
    vector<int> v1(6);
    v1 = {1, 2, 3};
    int n = 6;
    int m = 3;
    vector<int> v2 = {2, 4, 6};
    mergeSortedArraysIntoFirst(v1, v2 , n, m);
}