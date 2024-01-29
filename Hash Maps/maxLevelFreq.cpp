// WAP to print out the max level frequency of a number inside an array

#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

// My implementation 

// int main() {
//     unordered_map<int, int> freq;

//     vector<int> list{1, 2, 2, 2, 3, 4, 4, 5};
//     // cout << list[1] << endl;

//     vector<int> :: iterator it = list.begin();
//     while(it != list.end()) {
//         freq[*it];
//         it++;
//     }

//     unordered_map<int, int>::iterator iter = freq.begin();
//     int max = 0;
//     int maxIndex = -1;
//     while (iter != freq.end()){
//         if (iter->second > max){
//             max = iter ->second;
//             maxIndex = iter ->first;
//         }
//     }
//     cout << max << " " << maxIndex << endl;
//     // cout << freq.size() << endl;
// }


int main() {
    unordered_map<int, int> count;

    int maxFreq = 0;
    int maxAns = 0;

    vector<int> arr{1,2,2,3,4,5,5};
    for (int i=0; i< arr.size(); i++) {
        count[arr[i]]++;
        maxFreq = max(maxFreq, count[arr[i]]);
    }

    for (int i=0; i< arr.size(); i++) {
        if(maxFreq == count[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }
    cout << maxAns << endl;
}