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

class list{
    Node* head;
    Node* tail;

public:
    list(){
        head = tail = NULL;
    }

    void push_front(int val){               // O(1)
        Node* newNode = new Node(val);
        Node* newNode2 = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){               // O(1)
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){               // O(1)
        if(head == NULL){
            cout << "Linked list is empty";
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){               // O(n)
        if(head == NULL){
            cout << "Linked list is empty";
            return;
        }

        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }


    void printLL(){               // O(n)
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "\t->\t";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(0);
    ll.push_back(-1);
    ll.push_back(-2);

    ll.pop_front();
    ll.pop_back();

    ll.printLL();
    
}