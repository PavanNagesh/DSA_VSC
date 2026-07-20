#include <iostream>
#include <string>
using namespace std;

class print{
public:
    void show(int x){
        cout << "int: " <<  x << endl;
    }

    void show(string st){
        cout << "Str: " <<  st << endl;
    }
};

int main(){
    print p1; 
    p1.show(71);
    return 0;
}