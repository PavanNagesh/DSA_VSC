#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int cursum = 0;
        int maxsum = INT_MIN;   

        for(int i : nums){
            cursum = cursum + i;
            maxsum = max(maxsum,cursum);
            if(cursum < 0){
                cursum = 0;
            }
        }
        return maxsum;
}   

int main(){
    vector <int> vec = {-1,23,8,-89,11};
    cout << "The maximum sum of subarrays is: " << maxSubArray(vec);
    return 0;
}
