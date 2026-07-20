#include <iostream>
using namespace std;

int pairSum(int n, int a[], int target){
    int start = 0;
    int end = n-1;
    int pairsum = 0;

    while (start <  end){
        pairsum = a[start] + a[end];
        if(pairsum < target){
            start++;
        }
        else if(pairsum > target){
            end--;
        }
        else{
            cout << "[" << start << "," << end << "]";
            exit(0);
        }
    }
    return 0;
}

int main(){
    int num = 5;
    int a[num] = {13, 21, 36, 39, 54};
    int target = 75;

    cout << pairSum(num,a,target);  
}