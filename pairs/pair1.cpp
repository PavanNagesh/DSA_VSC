#include <iostream>
using namespace std;

int main(){
    pair<int, int> p = {1,2};
    pair<string, int> a = {"Pavan", 21};
    pair<char, int> i = {'P', 9};
    pair<char, string> r = {'V', "Kohli"};
    
    cout << "int and int: "<< endl;
    cout << p.first << endl;
    cout << p.second << endl;

    cout << "\nString and int: "<< endl;
    cout << a.first << endl;
    cout << a.second << endl;

    cout << "\nchar and int: "<< endl;
    cout << i.first << endl;
    cout << i.second << endl;

    cout << "\nchar and String: " << endl;
    cout << r.first << endl;
    cout << r.second << endl;
}