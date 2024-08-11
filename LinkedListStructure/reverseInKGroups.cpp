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

Node* reverseKGroup(Node* &head, int k) {

    if(head == NULL) {
            return head;
        }

        int length = 0;
        Node* temp = head;
        while(temp != NULL) {
            length++;
            temp = temp -> next;
        }

        if(length < k) {
            return head;
        }

        Node* next = NULL;
        Node* prev = NULL;
        Node* curr = head;

        int count = 0;

        while(curr != NULL && count < k) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        if(next != NULL) {
            head -> next = reverseKGroup(next, k);
        }

        return prev;

}

int main() {
    Node* node1 = new Node(10);
    node1 -> next = new Node(20);
    node1 -> next -> next = new Node(30);
    node1 -> next -> next -> next = new Node(40);

    int k = 2;
    Node* head = node1;

    reverseKGroup(head, k);
}