#include <iostream>
using namespace std;

int main() {
    int age = 20;
    char grade = 'A';
    float pi = 3.14f;
    bool isSafe = true;
    double price = 108.99;

    cout << "My age is " << age << endl;
    cout << sizeof(age) << endl;
    cout << "My grade is " << grade << endl;
    cout << "Value of pi is " << pi << endl;
    cout << isSafe << endl;
    cout << "The price is " << price << endl;
    
    
    int value = grade;
    cout << value << endl;

    int newValue = (int)price;
    cout << newValue << endl; 

    return 0;
}