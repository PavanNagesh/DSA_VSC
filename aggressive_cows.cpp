#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int mindist){
    int cows = 1, lastStallpos = arr[0];
    for(int i = 1; i <n; i++){
        if(arr[i] - lastStallpos >= mindist){
            cows++;
            lastStallpos = arr[i];
        }
        if(cows == m){
            return true;
        }
    }

    return false;
}

int getDistance(vector<int>& arr, int n, int m){
    sort(arr.begin(), arr.end());

    int start = 1, end = arr[n-1]-arr[0], ans = -1;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            start = mid+1;
        } else{
            end = mid-1;
        }
    }

    return ans;
}

int main(){
    int n = 5, m = 3;
    vector<int> arr = {1,2,8,4,9};

    cout << getDistance(arr, n, m) << endl;
    return 0;
}
