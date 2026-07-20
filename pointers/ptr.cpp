#include <iostream>
using namespace std;

int main(){

    // Pointer
    int a = 19;
    int* b = &a;

    cout << "Content of pointer 'b' will be the same as the memory address of variable 'a'" << endl;
    cout << b << endl;
    cout << &a << endl;

    cout << "\nthe memory address of pointer 'b' will be different compared to them" << endl;
    cout << &b << endl;


    cout << "\n\n";
    float ab = 100.134;
    float* pointr = &ab;
    cout << &ab << endl;
    cout << pointr << endl;


    // Pointer to Pointer
    cout <<"\n\nPointer to Pointer" << endl;
    int d = 43;
    int* ptr = &d;
    int** parPtr = &ptr;

    cout << "" << &ptr;
    cout << "\n" << parPtr;


    // Dereferencing pointer
    cout << "\n\nPointer dereferencing a variable, gives its value" << endl;
    int n = 81;
    int* pointer = &n;
    cout << *(&pointer);

    cout << "\n\npointer to pointer, multiple references gives the value"<< endl;
    int p = 91;
    int* ptr1 = &p;
    int** parPtr1 = &ptr1;
    cout << *(*(*(&parPtr1)));

    // NULL pointer
    cout << "\n\nNULL pointer"<< endl;
    int * ptr3 = NULL;
    cout << ptr3;
    cout << &ptr3;
    return 0;
}