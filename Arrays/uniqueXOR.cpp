// Finding unique element using XOR function
#include <iostream>
using namespace std;

void uniqueElement(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i]; // Using XOR operator
    }
    cout << "The unique element is " << ans << endl;
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

    uniqueElement(arr, size);

    return 0;
}