// WAP to find the sum of all prime numbers in a giver rangeusing recursion
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int a, int k) {
    bool isPrimeVal = true;
    if(k > 1 && a%k == 0) {
        isPrimeVal = false;
        return isPrimeVal;
    }
    if(a==1 || k==1) {
        return isPrimeVal;
    }
    return isPrime(a, k-1);
}

int recursivePrimeSum(int a, int b, int k) {
    if(b-a == 0) {
        return k;
    }
    int e = a-1;
    if(isPrime(a, e)) {
        k = k + a;
    }
    return recursivePrimeSum(a+1, b, k);
}

int main() {
    int  a = 1;
    int b = 6;
    int k = 0;
    // cout << isPrime(6, 5) << endl;
    cout << recursivePrimeSum(a, b, k) << endl;
}