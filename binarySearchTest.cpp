#include <iostream>
#include <vector>
using namespace std;

void binarySearch(vector<int>& arr, int start, int end, int target) {
    int mid;
    while (start <= end) {
        mid = start + (end-start) / 2;

        if(arr[mid] == target) {
            cout <<" The target element is at the index " << mid << endl;
            break;
        }
        if(arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int start = 0;
    int length = arr.size();
    int end = length - 1;
    int k = 1;
    binarySearch(arr, start, end, k);
}