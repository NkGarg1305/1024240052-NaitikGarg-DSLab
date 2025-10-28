#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

int main(){
    int arr[] = {20, 100, 40, 80, 60};
    int n = 5;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1; i<n; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    temp->next = head;

    Node* ptr = head;
    do{
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    while(ptr != head);
    cout << head->data;
}
