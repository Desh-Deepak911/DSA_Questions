// WAP to delete a node from the Linked List
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp->data <<"->";
        temp = temp->next;
    }
}

Node* deleteNode(Node* head){
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

int main(){
    Node* head;

    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);

    head = node1;
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;
    node5 -> next = node6;
    cout << "Linked List before deletion of node " << endl;
    printLL(head);
    deleteNode(head);
    cout << "Linked List after deletion of node " << endl;
    printLL(head);
}