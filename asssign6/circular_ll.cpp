#include<iostream>
using namespace std;

class node {
public:       // make data and next public
    int data;
    node* next;

    //constructor
    node(int d) {
        this->data = d;
        this->next = NULL;
    }

    //destructor
    ~node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertnode(node* &tail, int element, int d) {
    // empty list
    if (tail == NULL) {
        node* newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else {
        // non-empty list → find element
        node* current = tail;
        while (current->data != element) {
            current = current->next;
            if (current == tail) break; // to prevent infinite loop if element not found
        }
        // element found (or looped around)
        node* temp = new node(d);
        temp->next = current->next;
        current->next = temp;
    }
}

void print(node* tail) {
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node* temp = tail;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}
void deletenode(node* &tail , int value){
    //empty list
    if(tail == NULL){
        cout << "list is empty" << endl;
        return;
    }
    //non empty
    node* prev = tail;
    node* current = prev-> next;
     while(current-> data != value){
        prev = current;
        current = current-> next;

     }
     prev -> next = current-> next;
    if(tail == current){
        tail  = prev;
    }
     current-> next = NULL;
     delete current;

}

int main() {
    node* tail = NULL;

    insertnode(tail, 5, 3);  // inserting 3 when list is empty
    print(tail);

    insertnode(tail, 3, 5);  // inserting 5 after 3
    print(tail);

    insertnode(tail, 5, 7);  // inserting 7 after 5
    print(tail);

    insertnode(tail, 7, 9);  // inserting 9 after 7
    print(tail);
    
    
    insertnode(tail , 5 , 10);
    print(tail);
    
    deletenode(tail , 3);
    print(tail);
    return 0;
}