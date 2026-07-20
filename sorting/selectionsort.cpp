#include <iostream>
using namespace std;

void selectionsort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int Smallestindx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[Smallestindx]){
                Smallestindx = j;
            }
        }
        swap(arr[i], arr[Smallestindx]);
    }
}

void returnarr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {4,1,5,3,2};
    int n = 5;
    selectionsort(arr, n);
    returnarr(arr, n);
    return 0;
}