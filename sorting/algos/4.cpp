#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

int main(){
    vector<pair<int, int>> vec = {{2,1}, {5,3}, {1,6},{4,3}};
    sort(vec.begin(), vec.end(), comparator);

    cout << "Custom sorting based on Second element primarily, but first element secondarily\n";
    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }
}