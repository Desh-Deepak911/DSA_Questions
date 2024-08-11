/* Linear DS formed by collection of nodes
    Node is a combination of Data and address of the next node
    Dynamic DS which can be grown and shrunk at runtime
    No memory wastage
    Create a node with data + address 
*/

#include<iostream>
#include<stack>
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

void insertAtHead(Node* &head, int d){

    // new node creation
    Node* temp = new Node(d);
    // We want that the new temp node which is to be added to the linked list should point to head of the original Linked List
    temp -> next = head;
    // Now we would want the head to point to temp, because that is the new head
    head = temp;
}

// Traversing a Linked List
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        // printing out the data of each node using temp to traverse the Linked List
        cout << temp -> data << " " ;
        // temp needs to point to the next node in the Linked List
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    // creating the new node
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
    //cout << node1 -> next << endl;

    // Making node1 as the head of the LinkedList
    Node* head = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

}