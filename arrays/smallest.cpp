#include <iostream>
#include <climits>
using namespace std;

int main(){
    int num;
    cout << "Enter the number of array elements: ";
    cin >> num;
    int arr[num];
    

    cout << "Enter the array elements: \n";
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    
    cout << "The array is: ";
    for(int j = 0; j < num; j++){
        cout << arr[j] << " ";
    }
    cout << "\n";

    int smallest = INT_MAX;
    for(int i = 0; i < num; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << "The smallest number is: " << smallest;

    for(int k = 0; k < num; k++){
        if(arr[k] == smallest){
            cout << "\nThe index of smallest number is: " << k;
        }
    }

    return 0;
    
    
}