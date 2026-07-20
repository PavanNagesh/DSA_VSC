#include <iostream>
#include <vector>
using namespace std;

int moorealg(vector<int>& nums){

    int freq = 0, ans = 0;
    for(int i = 0; i < nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        } else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector <int> num = {1,2,1,2,2};
    cout << "The majority element using moore's algo is: " << moorealg(num);
}