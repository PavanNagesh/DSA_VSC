#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
    vector<pair<int, string>> vec = {{1,"Pavan"}, {2,"Preetham"}, {3,"Pramod"}};

    for(pair<int, string> p : vec){
        cout << p.first << " " << p.second << endl;;
    }

    vector<pair<int, int>> vec1 = {{1,3}, {2,7}, {3,11}};
    
    vec1.push_back({3,4});
    vec1.emplace_back(11, 9);

    for(auto q : vec1){
        cout << q.first << " " << q.second << endl; 
    }
}