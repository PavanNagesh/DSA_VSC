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

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else{
            newNode->next = head;
            head = newNode;
        }
        
    }

    void ins(int val, int pos){               // O(n)
        if(pos < 0){
            cout << "invalid position!";
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        Node* temp = head;
        Node* newNode = new Node(val);
        for(int i = 0; i < pos - 1; i++){   
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;

    }

    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    list l;
    l.push_front(5);
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);

    l.printLL();
    l.ins(19, 0);
    l.printLL();

    return 0;
}