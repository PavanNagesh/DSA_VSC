#include <iostream>
using namespace std;   

// int rev(int arr[], int sz){
//     cout << "The reverse order of array is: ";
//     for(int i = sz-1; i >=0; i--){
//          cout << arr[i] << ", ";
//     }
//     return 0;       
// }

// int main(){
//     int a []= {84,4,92,54,69};
//     int sz = 5;
//     rev(a, sz);
//     return 0;
// }

// ================================================================ 2 pointer approach

void rev(int arr[], int sz){
    int start = 0;
    int end = sz-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }      
}
int main(){
    int arr[] = {19,61,33,14};
    int size = 4;

    rev(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return  0;

}
