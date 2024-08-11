#include <iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data) {

    Node* temp = new Node(data);

    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data) {

    Node* temp = new Node(data);

    tail->next = temp;
    temp = NULL;
}

void insertAtPosition(Node* &head, int data, int pos) {

    Node* temp = new Node(data);

    Node* temp2 = head;
    int c = 0;
    while(temp2 != NULL)  {
        c++;
        if(c == pos) {
            break;
        }
        temp2 = temp2 -> next;
    }

    temp -> next = temp2 -> next;
    temp2 -> next = temp;
}

void printList(Node* &head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << endl;
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {

    // creating a node from a constructor, by passing data
    Node* node1 = new Node(10);

    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 20);
    insertAtTail(tail, 30);

    insertAtPosition(head, 40, 2);

    printList(head);
}