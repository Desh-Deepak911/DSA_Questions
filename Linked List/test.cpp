#include<iostream>
#include<stack>
using namespace std;

class Node{

    public:
    int data;
    Node* next; // It stores the address of the node

    Node(){
        data = 0;
        next = NULL;
    }
    
    Node(int val){
        data = 0;
        next = NULL;
    }
};

int main(){

    Node head = Node(); //  this is a pointer to the node {It stores the address of the node}
    
    Node* node1 = new Node(10);
    head.next = node1;

    cout << &head << endl;
    cout << node1;
}