#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cout << "Ascending Order\n";
    vector<int> vec = {1,3,6,4,5};

    sort(vec.begin(), vec.end());
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    cout << "\n\nDescending Order\n";
    vector<int> vec1 = {1,3,6,4,5};

    sort(vec1.begin(), vec1.end(), greater<int>());
    for(int val1 : vec1){
        cout << val1 << " ";
    }
}