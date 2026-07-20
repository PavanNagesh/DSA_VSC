#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    cout << "Size of the set" << endl;
    cout << s.size() << endl;
    cout << "\nSet content: \n";
    for(auto val : s){
        cout << val << " ";
    }
    cout << endl;

    cout << "\nLower Bound for 4: \n";
    cout << *(s.lower_bound(4)) << endl;

    cout << "\nUpper Bound for 4: \n";
    cout << *(s.upper_bound(4)) << endl;

    cout << "\nLower Bound for 3 (non existant number, it returns the next higher number): \n";
    cout << *(s.lower_bound(3)) << endl;

    cout << "\nLower Bound for 7 (non existant number, it has no higher number than that): \n";
    cout << *(s.lower_bound(7)) << endl;

    return 0;
}