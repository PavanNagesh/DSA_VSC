// Pass By Reference
#include <iostream>
using namespace std;


int changeA(int* ptr){ // pass by reference
    *ptr = 20;
}

int changeA(int &b){ // pass by reference using alias
    b = 20;
}

int main(){
    int a = 10;
    changeA(a);

    cout << "Value passed from the function, called from main: " << a << endl;
    return 0;
}