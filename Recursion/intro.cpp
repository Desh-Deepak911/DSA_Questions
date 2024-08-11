/*  
    This is the intro to Recursion
    Recursion in C++ is a technique in which a function calls itself repeatedly until a given condition is satisfied. In other words, recursion is the process of solving a problem by breaking it down into smaller, simpler sub-problems.
    return_type recursive_func {
    ....
       // Base Condition
       // Recursive Case
       ....
    }

    Base Condition: The base condition is the condition that is used to terminate the recursion.
    Recursive Case: Recursive case is the way in which the recursive call is present in the function. Recursive case can contain multiple recursive calls, or different parameters such that at the end, the base condition is satisfied and the recursion is terminated.
*/

/*
    Memory Management in C++ recursion
    The memory used in a recursive function calls is a stack memory. This stack frame is deleted once the function returns some value.

    Stack Overflow:
    When there is a large number of recursive calls or recursion goes on infinite times, this stack memory may get exhausted and may not be able to store more data leading to programs’ termination.
*/


// Find the sum of natural numbers till n using recursion;

#include <iostream>
using namespace std;

int recursiveSum(int n) {
    // Base Case
    if(n==1) {
        return 1;
    }

    // Recursive Case
    return n + recursiveSum(n-1);
}

int main() {
    int n = 3;
    int sum = recursiveSum(n);
    cout << sum << endl;
}