#include <iostream>
#include <vector>
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

class queue {
    Node* head;
    Node* tail;

public:
    queue(){
        head = tail = NULL;
    }

    void push(int data){
        Node* newNode = new Node(data);
        if(empty()){
            head = tail = newNode; 
        } else{
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void pop(){
        if(empty()){
            cout << "Queue is empty";
            return;
        }

        Node* temp = head;
        head = head -> next;
        delete temp;
    }

    int front(){
        if(empty()){
            cout << "Queue is empty";
            return -1;
        }
        return head -> data;
    }

    bool empty(){
        return head == NULL;
    }
};

int main(){
    queue q;

    q.push(9);
    q.push(13);
    q.push(19);

    q.pop();

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}