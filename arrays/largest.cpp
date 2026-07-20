#include <iostream>
#include <climits>
using namespace std;

int main(){
    int num;
    cout << "Enter the size of array: ";
    cin >> num;
    int arr[num];

    cout << "enter the array elements: \n";
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    
    cout << "====================\n";
    cout << "The array is: [";
    for(int j = 0; j < num; j++){
        cout << arr[j] << " ";
    }
    cout << "]\n";

    int largest = INT_MIN;
    for(int i = 0; i < num; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "The largest number is: " << largest;
    
    for(int k = 0; k < num; k++){
        if(arr[k] == largest){
            cout << "\nThe index of largest number is: " << k;
        }
    }

    return 0;
}