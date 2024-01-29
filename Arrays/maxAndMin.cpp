#include <iostream>
using namespace std;

int printMax(int arr[], int size) {
    int max = INT_MIN;
    for (int i=0; i<size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int printMin(int arr[], int size) {
    int min = INT_MAX;
    for (int i=0; i<size; i++) {
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int size;
    string str = "Enter the size of the array";
    cin >> str;
    cin >> size;
    int arr[size];

    // Enter each elements of the array
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    // int arr[5] = {2, 4, 5, 6, 1}; - for array initialization
    cout << printMax(arr, size) << endl;
    cout << printMin(arr, size) << endl;

    return 0;
}