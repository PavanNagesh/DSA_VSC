#include <iostream>
#include <vector>
using namespace std;

int add(vector <int>& nums, int target){
    for(int i = 0; i < nums.size(); i++){
        int n = 1;
        
        while(i+n < nums.size()){
            int sum = nums[i] + nums[i+n];
            if(sum == target){
                cout << "The digits are: " << i << ", " << i+n;
                return 1; 
            }
            n++;
        }
    }
    cout << "No combination found";
    return 0;
}

int main(){
    vector <int> vec = {3,12,4,8,11};
    int target = 23;
    add(vec, target);
    return 0;
}