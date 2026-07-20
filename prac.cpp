#include <iostream>
using namespace std;

void add(int arr[], int target, int sz){
    for(int i = 0; i < sz; i++){
        for(int j = i+1; j < sz; j++){
            int sum = arr[i] + arr[j];
            if(sum == target){
                cout << "The indices of addition of two numbers are: "<< i << ", "<< j;
                break;
            }
        }
    }
}

int main(){
    int arr[] = {5,3,9,2,4};
    int target = 13;
    int sz = 5;

    add(arr, target, sz);

    return 0;
}