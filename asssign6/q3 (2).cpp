#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

int sizeOfDoubly(Node* head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
}

int sizeOfCircular(Node* head){
    if(!head) return 0;
    int count = 0;
    Node* temp = head;
    do{
        count++;
        temp = temp->next;
    }while(temp != head);
    return count;
}

int main(){
    Node* d1 = new Node(10);
    d1->next = new Node(20);
    d1->next->prev = d1;
    d1->next->next = new Node(30);
    d1->next->next->prev = d1->next;

    cout << "Size of Doubly Linked List: " << sizeOfDoubly(d1) << endl;

    Node* c1 = new Node(5);
    c1->next = new Node(15);
    c1->next->next = new Node(25);
    c1->next->next->next = c1;

    cout << "Size of Circular Linked List: " << sizeOfCircular(c1);
}
