// Find the starting point of a circular loop in a linked list.

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

void startingPointOfLoop(Node* &head) {

    Node* slow = head;
    Node* fast = head;
    Node* temp;

    while(slow != NULL && fast != NULL) {
        fast = fast->next;

        if(fast != NULL) {
            fast = fast->next;
        }

        slow = slow->next;

        if(fast == slow) {
            break;
        }
    }

    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    cout << "Starting point of loop" << slow -> data << endl;
}

int main() {

    Node* node1 = new Node(10);
    node1 -> next = new Node(20);
    node1 -> next -> next = new Node(30);
    node1 -> next -> next -> next = new Node(40);
    node1 -> next -> next -> next -> next = node1 -> next;

    Node* head = node1;
    startingPointOfLoop(head);
}
