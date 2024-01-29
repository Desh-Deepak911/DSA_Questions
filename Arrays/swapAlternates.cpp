// WAP to swap alternate elements of the array
#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int size) {
    int i;
    int new_size = (size % 2) == 0 ? size : size-1;
    for(i = 0; i < new_size-1; i=i+2) {
        int swap = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = swap;
    }
    printArr(arr, size);
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

    swapAlternate(arr, size);
}