#include <iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void reverseTheLinkedList(Node* &head) {

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }

    while(prev != NULL) {
        cout << prev -> data << endl;
        prev = prev -> next;
    }

}

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {

    Node* node1 = new Node(10);
    node1 -> next = new Node(20);
    node1 -> next -> next = new Node(30);
    node1 -> next -> next -> next = new Node(40);

    Node* head = node1;

    reverseTheLinkedList(head);
    //print(head);
}