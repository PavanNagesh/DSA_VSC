#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(2);
    l.push_back(7);
    l.push_front(3);
    l.push_front(10);

    l.pop_back();

    for(int i : l){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}