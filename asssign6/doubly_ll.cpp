#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyList{
public:
    Node* head;
    DoublyList(){
        head = NULL;
    }

    void insertAtEnd(int val){
        Node* n = new Node(val);
        if(!head){
            head = n;
            return;
        }
        Node* temp = head;
        while(temp->next) temp = temp->next;
        temp->next = n;
        n->prev = temp;
    }

    void insertAtBeg(int val){
        Node* n = new Node(val);
        if(!head){
            head = n;
            return;
        }
        n->next = head;
        head->prev = n;
        head = n;
    }

    void deleteNode(int val){
        if(!head) return;
        Node* temp = head;
        while(temp && temp->data != val) temp = temp->next;
        if(!temp) return;
        if(temp->prev) temp->prev->next = temp->next;
        else head = temp->next;
        if(temp->next) temp->next->prev = temp->prev;
        delete temp;
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    DoublyList dl;
    dl.insertAtEnd(10);
    dl.insertAtEnd(20);
    dl.insertAtBeg(5);
    dl.display();
    dl.deleteNode(10);
    dl.display();
}
