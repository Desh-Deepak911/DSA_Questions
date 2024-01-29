// WAP to print out all the duplicates in the array
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

void findAllDuplicateXOR(int arr[], int size) {
    unordered_map<int, int> duplicates;
    int i;
    for (i = 0; i < size; i++) {
        duplicates[arr[i]]++;
    }
    unordered_map<int, int>::iterator it = duplicates.begin();
    cout << "All the duplicates in the array " << endl;
    while (it != duplicates.end()) {
        if(it-> second == 2){
            cout << it -> first ;
        }
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

    //findDuplicate(arr, size);
    findAllDuplicateXOR(arr, size);
    return 0;
}