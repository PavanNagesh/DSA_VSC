#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {-1,23,8,-89,11};
    int maxsum = INT_MIN;
    for(int start = 0; start < n; start++){
        int cursum = 0;
        for(int end = start; end < n; end++){
            cursum = cursum + arr[end];
            maxsum = max(maxsum, cursum);    
        }   
    }
    cout << "The max sum is: " << maxsum;
    return 0;
}