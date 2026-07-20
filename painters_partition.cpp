#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int maxAllowed){
    int painters = 1;
    int time = 0;
    for(int i = 0; i < n; i++){
        if(time + arr[i] <= maxAllowed){
            time += arr[i];
        } else{
            painters++;
            time = arr[i];
        }
    }
    return painters > m ? false : true;
}

int allocateBoards(vector<int>& arr, int n, int m){
    int sum = 0, maxVal = INT_MIN;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int start = maxVal;
    int end = sum;
    int ans = -1;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        } else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {40, 30, 10, 20};
    int n = 4;
    int m = 2;
    cout << allocateBoards(arr, n, m) << endl;
    return 0;
}