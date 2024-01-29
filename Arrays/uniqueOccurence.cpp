// WAP to return true when each element in the array has unique number of occurences
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <map>
using namespace std;

void uniqueOccurenceFlag(int arr[], int size) {

    bool result = true;
    unordered_map<int, int> uniqueCount;
    for (int i=0; i<size; i++) {
        uniqueCount[arr[i]]++;
    }
    // unordered_map<int, int>::iterator it = uniqueCount.begin();
    unordered_set<int> uniqueSet; // Creating a set
    for (auto i: uniqueCount){
        // uniqueSet.count is a function that returns true or false depending whether we already have the element in the set.
        if (uniqueSet.count(i.second)){
            result = false;
            break;
        }
        uniqueSet.insert(i.second);
    }

    if(result) {
        cout << "It is a unique set of data." << endl;
    }
    else {
        cout << "This is not a unique set of data. Elements occur with the same frequency" << endl;
    }
}

int main() {

    int size;
    string ques = "Enter the size of the array";
    cout << ques << endl;
    cin >> size;
    int arr[size];
    ques = "Enter the elements of the array";
    cout << ques << endl;
    for (int i=0; i< size; i++) {
        cin >> arr[i];
    }

    uniqueOccurenceFlag(arr, size);
    return 0;
}