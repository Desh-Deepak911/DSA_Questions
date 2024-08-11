// WAP to print to group all the anagrams and print them.
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> strs = {"act","pots","tops","cat","stop","hat"};

    vector<string> duplicate = strs;
    vector<vector<string> > result;

    vector<string> collection = {};

    for(int i=0; i<duplicate.size(); i++) {
        sort(duplicate[i].begin(), duplicate[i].end());
    }

    unordered_map<string, vector<int> > position;

    for(int i=0; i<duplicate.size(); i++) {
        position[duplicate[i]].push_back(i);
    }

    for(auto i: position) {
        for(auto x: i.second) {
            collection.push_back(strs[x]);
        }
        result.push_back(collection);
        collection = {};
    }

}