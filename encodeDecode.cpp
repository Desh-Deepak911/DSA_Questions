#include <string>
#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> result = {};
    vector<string> strs = {"neet","code","love","you"};

    string encodedStr = "";
    for(int i=0; i<strs.size(); i++) {
        encodedStr += to_string(strs[i].length())+'#'+strs[i];
    }

    string s = encodedStr;
    int size = s.length();
    int i=0;
    while(i<size) {
        int index = s.find('#', i);
        int len = stoi(s.substr(i, index));
        string str = s.substr(i, len);
        result.push_back(str);
        i=index;
    }

    for(int i=0; i< result.size(); i++) {
        cout << result[i] << endl;
    }

}