#include <iostream>
using namespace std;

void update(int arr[], int size) {

    cout << "Inside the function" << endl;

    // printing the array
    for (int i = 0; i<size; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;

    cout << "Going to the main function" << endl;
}

void sumOfArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    cout << sum << endl;
}

int main() {
    int arr[3] = {1, 2, 3};

    // We are sending the address of the main array to update, hence making any change to it in update function will make changes in the original array
    update(arr, 3);

    sumOfArray(arr, 3);
    // printing the array in main
    for (int i=0; i<3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}