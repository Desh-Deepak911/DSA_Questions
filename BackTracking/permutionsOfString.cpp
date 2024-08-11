// WAP to print out all the unique permutations of a string input using backtracking and recursive algorithm.
/* Using recursion */
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

void solve(string input, string output, vector<string> &v) {

    // Base condition
    if(input.size() == 0) {
        v.push_back(output);
        return;
    }

    // this is our controlled recursion step, to make sure we are not creating branches for characters that were already present in the input string i.e. duplicates
    unordered_set<char> mp = {};

    // We are running through the choices at each level of the estimated out put box. So, this will go from 3 at 1st, 2 at 2d and 1 at 3rd for the case of input as "abc".
    for(int i=0; i<input.size(); i++) {
        // an unordered set is used to make sure we are not creating branches for characters that were already present in the input string.
        if(mp.find(input[i]) == mp.end()) {
            mp.insert(input[i]);

            // create a new string to be sent as input for our permutations function, so that we can run through the choices at the next character.
            string inputString = input.substr(0, i) + input.substr(i+1);
            string outputString = output + input[i];

            // runs a function to create permutations.
            solve(inputString, outputString, v);
        }
    }

}

int main() {
    string input = "ABC";
    vector<string> v = {};
    string output = "";
    solve(input, output, v);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}
