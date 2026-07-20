#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr [n] = {2, 3, 3, 4, 25};
    int target = 6;
    bool b = false;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if( arr[i] + arr[j] == target){
                cout << "The indices of numbers whose sum is matching target = " << "[" << i  << "," << j << "]" << endl;
                cout << "The numbers are: " << "[" << arr[i]  << "," << arr[j] << "]" << endl;
                b = true;
            }
            
        }
    }

    if(b == false){
        cout << "Pair of numbers not found in array";
    }
    return 0;
}