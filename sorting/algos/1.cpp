#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[5] = {3,5,2,1,7};

    sort(arr, arr+5);

    for(int val : arr){
        cout << val << " ";
    }
}