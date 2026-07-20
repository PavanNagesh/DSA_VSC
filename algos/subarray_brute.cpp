#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1,23,8,89,11};
    for(int start = 0; start < n; start ++){
        for(int end = start; end < n; end ++){
            for(int i = start; i <= end; i++){
                cout << arr[i];
            }
            cout  << " ";
        }
        cout << endl;
    }

    return 0;
}