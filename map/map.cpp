#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> m;

    m["Cricket Ball"] = 450;
    m["Cycle"] = 4500;
    m["Shirt"] = 349;
    m["HeadPhones"] = 1299;

    cout << "Original Map: \n";
    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }

    m.emplace("Phone", 10000);

    cout << "\n\nAfter Adding Phone:\n";
    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }

    cout << "\n\nCounting the value assigned to headphones: \n";
    cout << "Count = " << m["HeadPhones"] << endl;

    if(m.find("Cricket Ball") != m.end()){
        cout << "\nFound!"<< endl;
    } else{
        cout << "Not Found" << endl;
    }

    return 0;
}