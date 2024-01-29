#include <iostream>
using namespace std;

int main() {

    int num = 5;
    // this num will be stored at some address in the memory
    // this address will be referenced everytime we need num and any process on it
    cout << num << endl;

    // address of operator - & 

    cout << "address of num is " << &num << endl;

    int *ptr = &num; // Correct assignment of address to memory

    int ptr2 = num;

    cout << &ptr2 << " " << &num << " " << &ptr << endl;

    // int ptr2 = &num; // this is a wrong assignment, as we are trying to store address in a variable.

    // We need the asterisk sign to store the address.
    // ptr stores the address, but to access the value on ptr address we use the asterisk sign
    cout << ptr << endl; // this will give the address of num
    cout << *ptr << endl; // this gives the value stored in num

    return 0;
}