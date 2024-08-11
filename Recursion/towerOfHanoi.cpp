#include <iostream>
#include <vector>
using namespace std;

void towerOfHanoi(int n, int a, int b, int c) {
    if(n>0) {
        towerOfHanoi(n-1, a, c, b);
        cout << "Moving from " << a << " " << c;
        towerOfHanoi(n-1, b, a, c);
    }
    else {
        return;
    }
}

int main() {
    int n = 3;
    int a = 1, b= 2, c=3;
    towerOfHanoi(n, a, b, c);
}