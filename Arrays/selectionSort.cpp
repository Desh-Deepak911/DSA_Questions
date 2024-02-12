// WAP to sort an array using selection sort - For small size arrays
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> v, int n) {
    int i = 0;
    for(i; i<n-1; i++) {
        int minimIndex = i;
        for(int j=i; j<n; j++) {
            if(v[j] < v[minimIndex]) {
                minimIndex = j;
            }
        }
        swap(v[i], v[minimIndex]);
    }
    for(int i=0; i<n; i++) {
        cout << v[i] << "  ";
    }
}

int main() {
    vector<int> v = {4, 1, 2, 6, 9, 3};
    selectionSort(v, 6);
}