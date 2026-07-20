#include <iostream>
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


class doublyList{
    Node* head;
    Node* tail;

public:
    doublyList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        head -> prev = newNode;
        newNode -> next = head;
        head = newNode;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode;
    }

    void pop_front(){
        if(head == NULL){
            cout << "Null Linked List. Try inserting elements and try";
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp -> next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "Null Linked List. Try inserting elements and try";
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;

    }
    
    void print(){
        Node* temp = head;
        cout << "NULL <=> ";
        while(temp != NULL){
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    doublyList ll;
    ll.push_front(12);
    ll.push_front(9);
    ll.push_front(42);

    ll.push_back(92);
    ll.push_back(37);
    ll.push_back(76);

    ll.pop_front();
    ll.pop_back();
    ll.print();
}