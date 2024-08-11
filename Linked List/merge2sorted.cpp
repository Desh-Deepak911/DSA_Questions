// WAP to merge two sorted LinkedLists
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next = next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

Node* mergeLL(Node* A, Node* B) {
    Node* C = new Node();
    Node* p3;
    Node* p1 = A;
    Node* p2 = B;
    p3 = C;
    if (p1->data < p2->data){
        p3->data = p1->data;
        p3->next = p3;
        p1 = p1->next;
    }
    else if(p1->data > p2->data){
        p3->data = p2->data;
        p3 = p3-> next;
        p2 = p2 -> next;
    }
    else{
        p3->data = p1->data;
        p3 = p3-> next;
        p2 = p2 -> next;
        p1 = p1 -> next;
    }

    return p3->next;
}

int main() {

    Node* head1;
    Node* head2;
    Node* node1 = new Node(1);
    Node* node2 = new Node(5);
    Node* node3 = new Node(6);

    Node* node4 = new Node(2);
    Node* node5 = new Node(3);
    Node* node6 = new Node(4);

    // First sorted LinkedList
    head1 = node1;
    node1->next = node2;
    node2->next = node3;

    // Second sorted LinkedList
    head2 = node4;
    node4->next = node5;
    node5->next = node6;

    mergeLL(head1, head2);

}