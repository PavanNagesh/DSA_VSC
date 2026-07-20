#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 1
    cout << "Normal vectors with for loop\n";
    int n = 3;
    vector <int> vec = {1,2,3};
    for(int i = 0; i < n; i++){
        cout << vec[i];
    }
    
    cout << "\n============================================\n";

    // 2
    cout << "\nUsing for each loop: \n";
    for(int i : vec){
        cout << i;
    }

    cout << "\n============================================\n";

    // 3
    cout << "\nUsing size x value\n";
    vector <int> vect (5,2);
    cout << vect[0] << endl;; 
    cout << vect[1];

    cout << "\n============================================\n";

    // 4 -- Size checking
    cout << "\nsize of vector is : " << vec.size();

    
    return 0;
}