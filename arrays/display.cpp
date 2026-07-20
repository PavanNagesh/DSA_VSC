#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the size of array: ";
    cin >> num;
    int arr[num];

    cout << "Enter the array elements\n";
    for(int i = 0; i < num; i++){
        
        cin >> arr [i];
    }

    for(int j = 0; j < num; j++){
        cout << arr[j] << ", ";
    }



    return 0;
}