// WAP to sort the elements of the array using bubble sort.
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> v, int n) {
    int i, j;
    for(i=1; i<n; i++) {
        // for rounds we are using i, from 1 to n-1
        for(j=0; j<n-i; j++) {
            // from 0 to n-1-i, and with each i reducing the search space
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
    for(i=0; i<n; i++) {
        cout << v[i] << "  ";
    }
}

void bubbleSortOptimised(vector<int> v, int n) {
    int i, j;
    for(i=1; i<n; i++) {
        // for rounds we are using i, from 1 to n-1
        bool swapped = false;
        for(j=0; j<n-i; j++) {
            // from 0 to n-1-i, and with each i reducing the search space
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                swapped = true;
            }
        }
        // If in the first round itself, nothing is swapped, then the array was sorted anyways, so we can break out of the loop. Hence we have optimised the process from O(n2) to O(n)
        if(swapped == false){
            break;
        }
    }
    for(i=0; i<n; i++) {
        cout << v[i] << "  ";
    }
}

int main() {
    vector<int> v = {4, 1, 2, 6, 9, 3};
    bubbleSort(v, 6);
}