#include <iostream>
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

class Clist{
    Node* head;
    Node* tail;

public:
    Clist(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
            tail->next = head;
        } else{
            newNode -> next = head;
            head = newNode;
            tail -> next = head;
          }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
            tail->next = head;
        }else{
            tail->next = newNode;
            tail = newNode;
            newNode->next = head;
        }
    }

    void pop_front(){
        if(head == nullptr){
            cout << "empty linked list.";
            return;
        }
        Node* temp = head;
        head = head->next;
        tail->next = head;
        delete temp;
    }

    void pop_back(){
        if(head == nullptr){
            cout << "empty linked list.";
            return;
        } else if(head == tail){
            delete head;
            head = tail = nullptr;
        } else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = head;
            delete tail;
            tail = temp;
        }
        
    }

    void print(){
        if(head == nullptr){
            return;
        }
        cout << head->data << " -> ";
        Node* temp = head->next;
        while(temp != head){
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << temp->data << endl;
    }
};

int main(){
    Clist Cl;

    Cl.push_front(31);
    Cl.push_front(23);
    Cl.push_front(66);
    Cl.print();

    Cl.push_back(13);
    Cl.print();

    Cl.pop_front();
    Cl.pop_back();

    Cl.print();

    return 0;
}