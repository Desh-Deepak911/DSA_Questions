// WAP to multiply two numbers without using multiplication operator with recursion
#include <iostream>
#include <vector>

int recursiveMultiply(int a, int b, int k) {
    if(b==0) {
        return k;
    }
    k = k + a;
    return recursiveMultiply(a, b-1, k);
}

int main() {
    int a = 5;
    int b = 4;
    int k = 0;
    std::cout << recursiveMultiply(a, b, k) << std::endl;
}