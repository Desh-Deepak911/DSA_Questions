// WAP to remove the Kth node from the end of a Linked List
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


    Node(int data){
        this ->data = data;
        this ->next = next;
    }
};

int lengthLL(Node* node) {
    int llcount = 0;
    Node* temp = node;
    while (temp != NULL) {
        llcount++;
        temp = temp->next;
    }
    return llcount;
}

void deleteKthNode(Node* A, int B){
    Node* temp;
    temp = A;
    int count = lengthLL(A);
    B = count - B;
    count = 0;
    temp = A;
    if ( B < 0){
        temp = A -> next;
        delete(A);
    }
    else{
        while(count < B){
            count = count + 1;
            temp = temp -> next; 
        }
        Node* toDelete = temp -> next;
        temp -> next = temp -> next -> next;
        delete(toDelete);
    }
    temp = A;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main(){
    Node* head;

    Node* node1 = new Node(10);
    Node* node2 = new Node(12);
    Node* node3 = new Node(22);
    Node* node4 = new Node(30);
    Node* node5 = new Node(20);
    Node* node6 = new Node(24);

    head = node1;
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;
    node5 -> next = node6;

    deleteKthNode(head, 2);
}