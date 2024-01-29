// WAP to find the unique element in the array
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

void uniqueElement(int arr[], int size) {

    // This is an important function which helps in storing the frequencies of all the elements in the array.
    // We are using hashmap for this purpose.
    unordered_map<int, int> frequency;
    int i;
    for (i=0; i<size; i++) {
        frequency[arr[i]]++;
    }

    // Creating an iterator for the map, which starts from begin.
    unordered_map<int, int> :: iterator it = frequency.begin();
    cout << "The unique element in the array is " << endl;

    // With this loop, we are iterating over the whole loop and checking which element has frequeny = 1
    while (it != frequency.end()) {
        if (it -> second == 1) {
            cout << it -> first << endl;
            break;
        }
        //cout << it->first << " " << it ->second << endl;
        it++;
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

    uniqueElement(arr, size);

    return 0;
}