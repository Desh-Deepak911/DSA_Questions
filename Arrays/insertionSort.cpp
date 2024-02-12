// WAP TO SPRT AN ARRAY USING INSERTION SORT
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> v) {
    int i, j;
    for(i=1; i<v.size(); i++) {
        int temp = v[i];
        int j = i-1;
        while(j>=0) {
            if(v[j] > temp) {
                v[j+1] = v[j];
            }
            else {
                break;
            }
            j--;
        }
        v[j+1] = temp;
    }
    for(i=0; i<v.size() ; i++) {
        cout << v[i] << "  ";
    }
}

int main() {
    vector<int> v = {3, 7, 1, 9, 2, 6};
    insertionSort(v);
}