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