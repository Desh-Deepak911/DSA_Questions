// WAP to reverse an array 
#include <iostream>
using namespace std;

// void printArr(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
// }

void printReverseArray(int arr[], int size) {
    for (int i = size-1; i > -1; i--) {
        cout << arr[i] << " ";
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

    printReverseArray(arr, size);
    return 0;
}