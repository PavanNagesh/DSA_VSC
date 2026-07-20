#include <iostream>
#include <vector>
using namespace std;

int binsearch (vector<int> &nums, int target){
    int start = 0;
    int end = nums.size() - 1;

    while(start <= end){
       int mid = start+(end-start)/2;

        if(target < nums[mid]){
            end = mid-1;
        } else if(target > nums[mid]){
            start = mid+1;
        }else{
            return mid;
        }
    }
    
    return -1;
}

int main(){
    vector <int> arr1 = {1,3,8,12,18,21};
    int target1 = 18;
    cout << "Binary Search (even) for target " << target1 << " is: " << binsearch(arr1, target1);

    vector <int> arr2 = {4,21,81,89,93};
    int target2 = 21;
    cout << "\n\nBinary Search (odd) for target " << target2 << " is: " << binsearch(arr2, target2);
}