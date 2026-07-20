#include <iostream>
#include <string>
using namespace std;

class A{
public:
    
    void incx(){
        static int x = 0;
        cout << x << endl;
        x = x + 1;
    }
};

int main(){
    A obj1;
    obj1.incx();
    obj1.incx();
    obj1.incx();
}