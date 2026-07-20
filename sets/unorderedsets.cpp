#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> us;
    us.insert(16);
    us.insert(6);
    us.insert(4);
    us.insert(5);
    us.insert(8);

    for(auto val : us){
        cout << val;
    }
}