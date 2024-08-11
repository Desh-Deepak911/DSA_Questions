// WAP to calculate the length of a linked List
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data) {
        this -> data = data;
        this ->next = NULL;
    }
};

void lengthLL(Node* node) {
    int llcount = 0;
    Node* temp = node;
    while (temp != NULL) {
        llcount++;
        temp = temp->next;
    }

    cout << llcount << endl;
}

int main(){

    Node* head;
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);

    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    lengthLL(head);
}