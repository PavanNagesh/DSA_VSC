#include <iostream>
#include <string>
using namespace std;

class Teacher{
private: //data hiding
    double salary;
public:
    //properties
    string name;
    string dept;
    string subject;

    //Non-Parameterized Constructor
    // Teacher(){
    //     cout << "Hi, I am a constructor!\n";
    // }

    //Parameterized Constructor
    Teacher(string n, string d, string s){
        this->name = n;
        this->dept = d;
        this->subject = s;
    }

    //Copy Constructor
    Teacher(Teacher &obj){
        cout << "I am a copy constructor\n";
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
    }

    //methods or member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter
    void setSalary(double s){
        salary = s;
    }

    //getter
    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout << "name: " << name << endl; 
        cout << "subject: " << subject << endl;
    }
};


int main(){
    Teacher t1("Sanjana", "Computer Science", "OOPS"); //CALLED SECOND!
    Teacher t2(t1); //CALLED FIRST!
    t2.getInfo();
    
    // t1.name = "Pavan";
    // t1. dept = "CS";
    // t1.subject = "COA";
    //t1.salary = 50000; NOT POSSIBLE AS IT IS PRIVATE PROPERTY


    // t1.setSalary(50000); //SETTING THE VALUE USING SETTER FUNC || CALLED THIRD!!
    // cout << t1.name << endl;
    // cout << t1.dept << endl;        // PREFERS NON-PARAMETERIZED CONSTRUCTOR FIRST ALWAYS 
    // cout << t1.subject << endl;
    // cout << t1.getSalary() << endl; // GETTING/RETURNING THE VALUE SET BY THE SETTER

    // t2.name = "PAVANAAAA";     //ALWAYS EXECUTES AT ITS PLACE, UNLIKE THE CONSTRUCTORS MSG IN THE FUNC
    // cout << t2.name << endl;


    // t1.getInfo();
    return 0;
}