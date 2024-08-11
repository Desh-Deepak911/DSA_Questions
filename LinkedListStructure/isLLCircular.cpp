#include <iostream>
#include <unordered_map>
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

void isCircular(Node* head) {
    unordered_map<Node*, int> mappings;

    Node* temp = head;
    int counter = 0;
    while(temp != NULL) {
        counter++;
        mappings[temp->next]++;
        if(mappings[temp] > 1) {
            cout << "Circular linked list" << endl;
            break;
        }
        temp = temp->next;
    }
    if(temp == NULL) {
        cout << "Not a Circular linked list" << endl;
    }
}

int main() {

    Node* node1 = new Node(10);
    node1 -> next = new Node(20);
    node1 -> next -> next = new Node(30);
    node1 -> next -> next -> next = new Node(40);
    node1 -> next -> next -> next -> next = node1-> next;

    Node* head = node1;

    isCircular(head);
    return 0;
}