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

void insertAtMiddle( Node* head, int data) {

    Node* temp = new Node(data);

    Node* temp2 = head;

    int length = 0;
    while(temp2 != NULL) {
        length++;
        temp2 = temp2->next;
    }

    int middle = length/2;

    temp2 = head;
    int counter = 0;
    while(temp2 != NULL) {
        counter++;
        if(counter == middle) {
            break;
        }
        temp2 = temp2 -> next;
    }

    temp -> next = temp2 -> next;
    temp2 -> next = temp;
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

    print(head);
    insertAtMiddle(head, 50);
    print(head);
}