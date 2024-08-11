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

Node* reverseLinkedList(Node* &head) {
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL) {
        next = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    return head;
}

void printList(Node* &head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << endl;
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);

    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);

    tail -> next = temp;
}

void addLinkedLists(Node* &head1, Node* &head2) {

    Node* temp = reverseLinkedList(head1);
    Node* temp2 = reverseLinkedList(head2);
    //cout << temp -> data << endl;
    Node* sumNode = NULL;
    Node* carry = new Node(0);
    int sum = 0;
    while(temp != NULL || temp2 != NULL) {
        if(temp -> next == NULL && temp2 -> next != NULL) {
            insertAtTail(temp, 0);
        }
        if(temp2 -> next == NULL && temp -> next != NULL) {
            insertAtTail(temp2, 0);
        }
        sum = temp-> data + temp2 -> data + carry -> data;
        if(sum > 10) {
            carry -> data = sum / 10;
            sum = sum % 10;
            insertAtHead(sumNode, sum);
        }
        else {
            insertAtHead(sumNode, sum);
        }
        temp = temp -> next;
        temp2 = temp2 -> next;
    }

    printList(sumNode);
}

int main() {

    Node* node1 = new Node(7);
    node1 -> next = new Node(8);
    node1 -> next -> next = new Node(9);

    Node* node2 = new Node(8);
    node2 -> next = new Node(4);

    Node* head1 = node1;
    Node* head2 = node2;

    addLinkedLists(head1, head2);
}