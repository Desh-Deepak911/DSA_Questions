// This program include all the insertion and deletion functions on the LinkedLists
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // non-parameterised constructor
    Node(){
        this -> data = 0;
        this -> next = NULL;
    }

    // parameterised constructor
    Node( int data ){
        this -> data = data;
        this -> next = NULL;
    }
};

// function to print out the linked list
void print(Node* head){

    // if head is pointing to NULL, then the linked list is empty
    if(head == NULL){
        cout << "Linked List is empty" << endl;
        return;
    }

    // if head is not pointing to NULL, then we will traverse the whole linked list and print out the data in every node we find
    Node* temp = head;
    while( temp != NULL ){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// function to add node to the head of the linked list
void insertAtHead(Node* &head, int n){

    Node* temp = new Node(n);
    temp -> next = head;
    head = temp;
}

// function to insert node at the tail of the linked list
void insertAtTail(Node* &tail, int n){

    Node* temp = new Node(n);
    tail -> next = temp;
    tail = temp;
}

// insertion at a specific position in the linked list
void insertAtPosition(Node* &head, int d, int k){
    // creating a new node
    Node* temp = new Node(d);
    Node* ptr =head;
    int count = 1;
    while(count < k){
        count++;
        ptr = ptr -> next;
    }
    temp -> next = ptr -> next;
    ptr -> next = temp;
}

// Now, lets start with deletions 
// Deletion at Node:
/*
Step 1: make a pointer to the head of the linked list
Step 2: make a pointer of the node to be deleted as NULL or a segmentation fault comes
*/
void deleteAtHead(Node* &head){

    if(head == NULL){
        return;
    }
    Node* temp = head;  
    head = head -> next;
    temp->next = NULL;
    delete temp;
}

// deleting node from a position in the linked list
void deleteAtPosition(Node* &head, int k){

    if(head == NULL){
        return;
    }
    Node* temp = head;
    Node* prev = NULL;
    int count = 1;
    while(count < k){
        prev = temp;
        temp = temp -> next;
        count++;
    }
    prev -> next = temp -> next;
    // This is an important step in deletion. To point the next of the node to be deleted to NULL.
    temp -> next = NULL;
    delete temp;
}

void deleteAtTail(Node* &head){

    Node* temp = head;
    Node* prev = NULL;
    while(temp -> next != NULL){
        prev = temp;
        temp = temp -> next;
    }
    prev -> next = NULL;
    temp -> next = NULL;
    delete temp;

}
// main function to add nodes to the end of the linked list
int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 11);
    insertAtTail(tail, -2);
    insertAtTail(tail, 23);
    insertAtHead(head, 7);
    insertAtHead(head, 5);
    insertAtHead(head, 1);
    insertAtHead(head, 3);
    insertAtPosition(head, 69, 4);
    insertAtPosition(head, 69, 2);
    print(head);
    deleteAtHead(head);
    print(head);
    deleteAtPosition(head, 2);
    print(head);
    deleteAtTail(head);
    print(head);

}