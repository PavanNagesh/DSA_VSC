#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this -> name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
        
    }

    ~Student(){
        cout << "I am a deconstructor";
        delete cgpaPtr;
    }

    void getInfo(){
        cout << "name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};


int main(){
    Student s1("Pavan", 9.12);
    s1.getInfo();
}