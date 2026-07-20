#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number of elements in array: ";
    cin >> num;
    int arr[num];

    cout << "Enter the array elements: \n";
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    cout << "The array Elements are: \n[";
    for(int j = 0; j < num; j++){
        cout << arr[j] << ", ";
    }

    int target;
    cout << "]\nEnter the target number to fnd in array: ";
    cin >> target;

    bool found = false;

    for(int i = 0; i < num; i++){
        if(arr[i] == target){
            found = true;
            cout << "The number " << target << " is found in the index " << i; 
            break;
        }
    }

    if(!found){
        cout << "Number not found in the array, try a different number";
    }
    return 0;

}