// WAP TO ROTATE AN ARRAY BY K ELEMENTS
#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void printLeftRotatedArray(int arr[], int k, int size) {
    int rotatedArr[size], i;
    cout <<"The left rotated array is " << endl;
    for(i =0; i< size; i++) {
        rotatedArr[i] = (i >= size-k) ? arr[i-size+k] : arr[i+k];
        cout << rotatedArr[i] << " ";
    }
    cout << endl;
}

void printRightRotatedArray(int arr[], int k, int size) {
    int rotatedArr[size], i;
    
    for (i = k; i < size; i++) {
        rotatedArr[i] = arr[i-k]; 
    }
    if(i >= size) {
        for(i = size; i < size+k; i++) {
            rotatedArr[i-size] = arr[i-k];
        }
    }
    cout << "The right rotated array is " << endl;
    printArr(rotatedArr, size);
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

    ques = "Enter amount of elements to be rotated";
    cout << ques << endl;
    int k;
    cin >> k;

    printLeftRotatedArray(arr, k, size);

    printRightRotatedArray(arr, k, size);

    return 0;
}