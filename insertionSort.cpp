// WAP to sort an array using insertion sort 
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> v, int n) {
    int i;
    for(i=1; i < n; i++) {
        // I want to check whether this element is lesser than all the elements to the left of it or not.
        // I can run a loop that will check for each element and based on it, it would shift elements to the right after comparison
        int j = i;
        int temp = v[j];
        while(temp < v[j-1]) {
            v[j] = v[j-1];
            j--;
            if(j==0) break;
        }
        v[j] = temp;
    }
    for(int i=0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}

int main() {
    vector<int> v = {4, 1, 2, 8, 3, 6, 9};
    insertionSort(v, v.size());
}