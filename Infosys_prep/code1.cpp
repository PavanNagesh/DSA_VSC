#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int solve(int N, int K, vector<int> Arr){
    unordered_map<int, int> m;
    int curSum = 0;
    int maxSum = 0;
    int distinctVal = 0;

    int left = 0;
    
    for(int right = 0; right < Arr.size(); right++){
        if(m.find(Arr[right]) != m.end()){
            m[Arr[right]]++;
        } else{
            m[Arr[right]] = 1;
            distinctVal++;
        }
        curSum = curSum + Arr[right];

        while(distinctVal > K){
            m[Arr[left]]--;
            curSum = curSum - Arr[left];
            if(m[Arr[left]] == 0){
                distinctVal--;
            }
            left++;
        }

        maxSum = max(maxSum, curSum);
    }

    return maxSum;
}

int main() {
    int N = 5;
    int K = 2;
    vector<int> Arr = {1, 2, 2, 3, 2};

    int answer = solve(N, K, Arr);

    cout << answer << endl;

    return 0;
}