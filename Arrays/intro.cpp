#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    cout << "printing the array" << endl;
    for (int i=0; i<n; i++) {
        cout << arr[i] << endl;
    }
    cout << "Printing done" << endl;
}

int main() {
    // Array Declaration
    int v[5];
    // Array Initialization
    int a[3] = {1, 2, 3};
    int b[3];
    int n = 3;
    for (int i =0; i< n; i++){
        cout << b[i] << endl;
    }

    // calculating the size (not length) of array
    int arr2[20];
    int arr2length = sizeof(arr2)/sizeof(int);
    // sizeof gives us the total amount of memeory taken up by the array
    // If an array has more capacity but less elements, we would not get the exact length of that array
    cout << arr2length << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[3] << endl;
    
}