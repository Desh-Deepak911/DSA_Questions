// WAP to search for an element in the array using linear search method
#include <iostream>
using namespace std;

void elementAtPosition(int arr[], int size, int k) {
    int i = 0;
    for ( i; i< size; i++) {
        if(arr[i] == k){
            cout << "Element at position " << arr[i] << endl;
            break;
        }
    }
    if(i == size){
        cout << "Element not found" << endl;
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

    ques = "Enter the element to be searched";
    cout << ques << endl;
    int k;
    cin >> k;

    elementAtPosition(arr, size, k);

    return 0;
}