// array = [3,4,6,2]
// target = 10
// output= 1,2

#include <iostream>
#include <vector>
using namespace std;

int targetind(vector<int>& nums, int target){
    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            int sum = nums[i] + nums[j];
            if(sum == target){
                cout << "The indices of addition to target value " << target << " is: " << i << ", " << j << endl;
                return 1;
            }
        }
    }
    cout << "No pairs found";
    return 0;
}

int main(){
    vector <int> arr = {3,7,6,9,8};
    cout << "The vector: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    int target;
    cout << "\nEnter the target value: ";
    cin >> target;
    targetind(arr, target);
    return 0; 
}