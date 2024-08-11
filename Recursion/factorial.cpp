// WAP to find the factorial of a number using recursion
#include <iostream>
using namespace std;

int recursiveFactorial(int n) {
    // Base Case
    if (n==1) {
        return 1;
    }

    return n * recursiveFactorial(n-1);
}

int main() {
    int n = 5;
    int f = recursiveFactorial(n);
    cout << f << endl;
}