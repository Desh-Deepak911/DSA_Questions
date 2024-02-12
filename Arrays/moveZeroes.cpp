// WAP to move all the zeroes in an array to the end of the array
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void moveZeroes(vector<int> v) {
    int i=0, j=v.size()-1;
    while(i<=j) {
        if(v[i] !=0 && v[j] !=0 ) {
            i++;
        }
        else if(v[j] ==0 && v[i] !=0) {
            j--;
        }
        else{
            swap(v[i], v[j]);
        }
    }
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " " << endl;
    }
}

int main() {
    vector<int> v = {1, 2, 0, 3, 0, 0, 4};
    moveZeroes(v);
}