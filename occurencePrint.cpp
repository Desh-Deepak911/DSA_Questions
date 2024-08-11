#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool printFreq (vector<int>& arr) {
    unordered_map<int, int> hashmap;
    unordered_set<int> seen;
    bool found = false;
    for(int i = 0; i < arr.size(); i++) {
        hashmap[arr[i]]++;
    }
    for(auto i = hashmap.begin(); i != hashmap.end(); i++) {
        if(seen.find(i->second) != seen.end()) {
            seen.insert(i->second);
        }
        else {
            found = false;
        }
    }
    return found;
}

int main() {
    vector<int> arr = {1, 2};
    cout << printFreq(arr) << endl;
}