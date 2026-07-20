#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    string subject;

    Person(){
        cout << "Parent Constructor\n";
    }

    Person(string name, string subject){
        cout << "Parameterized Parent Constructor\n";
        this->name = name;
        this->subject = subject;
    }

    

    ~Person(){
        cout << "Parent destructor\n";
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl; 
    }
};

class Student : public Person{
public:
    int rollno;

    Student(string name, string subject, int rollno) : Person(name, subject){
        cout << "Parameterized Child Constructor\n";
        this->rollno = rollno;
    }

    Student(){
        cout << "Child Constructor\n";
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Rollno: " << rollno << endl;
    }

    ~Student(){
        cout << "Child dectructor\n";
    }
};

int main(){
    Student s1("Saavan", "SST", 192);
    // s1.name = "Pavan";
    // s1.subject = "OOPS";
    // s1.rollno = 452;

    Person p1;
    p1.name = "Sanjana";
    p1.subject = "C++";

    s1.getInfo();
    // p1.getInfo();
}