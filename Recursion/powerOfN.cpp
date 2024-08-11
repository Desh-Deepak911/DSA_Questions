// WAP to find the power of a number using recursion
#include <iostream>
using namespace std;

int recursivePower(int m, int n) {
    if(n==0)
        return 1;
    else {
        int ans = m*recursivePower(m, n-1);
        return ans;
    }
}

int main() {
    int n = 5;
    int m = 4;
    cout << recursivePower(m, n) << endl;
}