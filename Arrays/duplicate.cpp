// WAP to find the element in the array that occurs twice
#include <iostream>
using namespace std;

// We can do it with another way using XOR
void findDuplicateXOR(int arr[], int size) {
    int i,ans = 0;
    for (i=0; i<size; i++) {
        ans = ans^arr[i];
    }
    for (i=1; i<size; i++) {
        ans = ans^i;
    }
    cout << "The duplicate element using XOR is " << ans << endl;
}

// This is an array implementation using sum method
// This would not work if we have random elements in the array such as  {1, 3, 5, 5, 6}
// void findDuplicate(int arr[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum = sum + arr[i];
//     }
//     int sumOfNumbers = (size*(size-1))/2;
//     int result = sum-sumOfNumbers;
//     cout << "The duplicate element is " << result << endl;
// }

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
    findDuplicateXOR(arr, size);
    return 0;
}