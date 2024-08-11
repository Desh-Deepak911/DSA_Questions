// WAP which takes an integer value as an input, and k as the number of swaps allowed.
// It returns the largest number possible after k swaps on the input value

#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void solve(string &n, int k, string &result, int start) {
    // Base Condition
    if(k==0 || start == n.size()-1) {
        return;
    }

    for(int i = start+1; i < n.size(); i++) {
        char max = *max_element(n.begin()+start+1, n.end());
        if(n[start] < max) {

            swap(n[start], n[i]);
            if(n > result) {
                solve(n, k-1, result, start+1);
            }

            swap(n[start], n[i]);
        }
    }
}

int main() {
    string n = "1234567";
    int k = 4;
    string result = n;
    solve(n, k, result, 0);
    // int maxDigit = findMax(s);
    // cout << maxDigit << endl;
}