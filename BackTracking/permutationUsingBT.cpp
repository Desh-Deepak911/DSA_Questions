// WAP to print out all the unique permutations of a string input using backtracking algorithm.
/* Using recursion */
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

void solve(string &input, int start, vector<string> &v) {

    // Base condition
    if(start == input.size()-1) {
        v.push_back(input);
        return;
    }

    // this is our controlled recursion step, to make sure we are not creating branches for characters that were already present in the input string i.e. duplicates
    unordered_set<char> mp = {};

    // We are running through the choices at each level of the estimated out put box. So, this will go from 3 at 1st, 2 at 2d and 1 at 3rd for the case of input as "abc".
    for(int i=start; i<input.size(); i++) {
        // an unordered set is used to make sure we are not creating branches for characters that were already present in the input string.
        if(mp.find(input[i]) == mp.end()) {
            mp.insert(input[i]);

            // swap the character at i with all the possible choices for that index.
            swap(input[start], input[i]);

            // runs a function to create permutations.
            solve(input, start+1, v);

            // Backtracking
            swap(input[start], input[i]);
        }
    }

}

int main() {
    string input = "ABC";
    vector<string> v = {};
    int start = 0;
    solve(input, start, v);
    for (int i = 0; i < v.size(); i++) {
        cout << endl;
        cout << v[i] << endl;
        cout << endl;
    }
}
