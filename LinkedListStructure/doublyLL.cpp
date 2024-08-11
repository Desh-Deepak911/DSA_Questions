#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void insertAtHead(Node* &head, int data) {

    Node* temp = new Node(data);

    temp -> next = head;
    head -> prev = temp;
    head = temp;

}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp-> data << endl;
        temp = temp -> next;
    }
}

int main() {

    Node* node1 = new Node(10);
    Node* head = node1;

    insertAtHead(head, 11);
    print(head);
    return 0;
}