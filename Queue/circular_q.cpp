#include <iostream>
#include <vector>
using namespace std;

class CirQue{
    int* arr;
    int currsize, cap;
    int f, r;

public:
    CirQue(int size){
        cap = size;
        arr = new int[cap];
        currsize = 0;
        f = 0;
        r = -1;
    }

    void push(int data){
        if(currsize == cap){
            cout << "Queue is full";
            return;
        }
        r = (r + 1) % cap;
        arr[r] = data;
        currsize++;
    }
    
    void pop(){
        if(empty()){
            cout << "Queue is empty";
            return;
        }
        f = (f + 1) % cap;
        currsize--;
    }
    
    int front(){
        if(empty()){
            cout << "Queue is empty";
            return -1;
        }

        return arr[f];
    }
    
    bool empty(){
        return currsize == 0;
    }

    void printarr(){
        for(int i = 0; i < cap; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    CirQue cq(3);

    cq.push(1);
    cq.push(2);

    cq.printarr();


    return 0;
}