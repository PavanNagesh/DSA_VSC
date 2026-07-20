#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int, int>p1, pair<int, int>p2){
    if(p1.second < p2.second) return true;
    else return false;
}


int main(){
    vector<pair<int, int>> vec = {{2,1}, {5,3}, {1,6},{4,3}};
    sort(vec.begin(), vec.end());

    cout << "Default Sorting based on first element\n";
    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }


    vector<pair<int, int>> vec1 = {{2,1}, {5,3}, {1,6},{4,4}};
    sort(vec1.begin(), vec1.end(), comparator);
    cout << "\nCustom Sorting based on second element\n";
    for(auto p : vec1){
        cout << p.first << " " << p.second << endl;
    }
}