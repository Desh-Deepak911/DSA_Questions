// WAP to create a linked List in cpp
#include<iostream>
#include<stack>
using namespace std;

// Here, I have created a class Node that can be used to create objects with attributes such as the data value and the address of the next Node.
// Node* next stores the address of the Node
class Node {

    public:
    int data; // stores the value of the node
    Node* next; // stores the address of the Node

    // default constructor
    Node(){
        data = 0;
        next = NULL;
    }

    // parametrised constructor 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

// the function that will be used to sort 0's, 1's and 2's in a LinkedList.

void printCount(Node* a){
    Node* temp;
    temp = a;
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    while (temp!=NULL){
        if (temp->data == 0)
        zeroCount++;
        else if(temp->data == 1)
        oneCount++;
        else
        twoCount++;

        temp = temp->next;
    }

    temp = a;
    while(temp != NULL){
        if(zeroCount >> 0){
            temp -> data = 0;
            zeroCount--;
        }
        else if(oneCount >> 0){
            temp -> data = 1;
            oneCount--;
        }
        else if(twoCount >> 0){
            temp -> data = 2;
            twoCount--;
        }
        temp = temp -> next;

    }

    temp = a;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head;

    Node* node1 = new Node(0);
    Node* node2 = new Node(1);
    Node* node3 = new Node(2);
    Node* node4 = new Node(0);
    Node* node5 = new Node(0);
    Node* node6 = new Node(2);

    head = node1;
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;
    node5 -> next = node6;

    printCount(head);
}