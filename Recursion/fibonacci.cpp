// WAP to print the fionacci series using recursion
#include <iostream>
using namespace std;

// This function will return value at the nth index in the fibonacci series.
// Our recursive function does not return the whole series, just the value at the index.
// Out for loop in the main function will handle the printing of values at each index from 0 to n-1 in the fibonacci series.
int recursiveFibonacci(int n) {
    if(n==0) 
        return 0;
    if(n==2 || n==1) 
        return 1;
    else 
        return (recursiveFibonacci(n-1) + recursiveFibonacci(n-2));
}

int main() {
    // So if we take an input as till which index we want to print the fibonacci series
    int n=7;
    // We can run a loop from 0 to n-1 to print the fibonacci number at that index.
    for(int i=0; i<n; i++) {
        cout << recursiveFibonacci(i) << "  ";
    }
}