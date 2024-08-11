// Let us create a doubly linked list
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// traversing a linked list and printing the nodes
void print(Node* head){
    Node* temp = head;

    while( temp != NULL ){
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

// function to print out the length of the linked list
int getLength(Node* head){
    int length = 0;
    Node* temp = head;

    while( temp != NULL ){
        cout << temp->data;
        temp = temp->next;
        length++;
    }
    
    return length;  
}

void insertAtHead(Node* &head, int data){
    // creating a new node
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;

}

int main() {
    
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);

    cout << getLength(head) << endl;

}