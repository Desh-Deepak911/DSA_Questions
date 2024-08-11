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

bool floydLoop(Node* &head) {

    Node* slow = head;
    Node* fast = head;

    bool isPresent = false;

    while(slow != NULL && fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast) {
            isPresent = true;
        }
    }
    return isPresent;
}

int main() {

    Node* node1 = new Node(10);
    node1 -> next = new Node(20);
    node1 -> next -> next = new Node(30);
    node1 -> next -> next -> next = new Node(40);
    node1 -> next -> next -> next -> next = node1-> next -> next;

    Node* head = node1;

    if(floydLoop(head)) {
        cout << "Cycle is present" << endl;
    }
    else {
        cout << "Cycle is not present" << endl;
    }
    return 0;
}