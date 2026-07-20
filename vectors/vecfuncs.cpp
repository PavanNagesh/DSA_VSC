#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 4;
    vector <char> vec = {'A', 'B', 'C', 'D'};
    cout << "The defaults elements are: \n";
    for(char c : vec){
        cout << c << ", ";
    }

    // push_back
    vec.push_back('E');
    vec.push_back('F');

    cout << "\n\nThe elements after pushback are: \n";
    for(char c : vec){
        cout << c << ", ";
    }

    // pop back
    vec.pop_back();

    cout << "\n\nThe elements after popback are: \n";
    for(char c : vec){
        cout << c << ", ";
    }

    // front
    cout << "\n\nThe front element: " << vec.front();

    // back
    cout << "\n\nThe back element: " << vec.back();

    // at
    cout << "\n\nThe 3rd index element: " << vec.at(3);

    // Calculating size and capacity of vec
    cout << "\n\nSize of vec: " << vec.size();

    cout << "\n\nCapacity of vec: " << vec.capacity();

}