#include<iostream>
using namespace std;

class Node{
public:
    char data;
    Node* next;
    Node* prev;
    Node(char val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

bool isPalindrome(Node* head){
    if(!head) return true;
    Node* tail = head;
    while(tail->next) tail = tail->next;
    while(head != tail && tail->next != head){
        if(head->data != tail->data) return false;
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main(){
    string s = "LEVEL";
    Node* head = new Node(s[0]);
    Node* temp = head;
    for(int i=1; i<s.size(); i++){
        Node* n = new Node(s[i]);
        temp->next = n;
        n->prev = temp;
        temp = n;
    }
    cout << (isPalindrome(head) ? "True" : "False");
}
