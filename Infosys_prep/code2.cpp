#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int solve(int N, int C, vector<int> A) {

    int curSum = 0;
    int maxSum = INT_MIN;
    int minSum = INT_MAX;

    for(int i : A){
        curSum = curSum + i;
        maxSum = max(maxSum, curSum);
        minSum = min(minSum, curSum);
    }

    if(minSum < 0){
        minSum *= -1;
    }

    int X = minSum;

    while(X <= C){

        int tank = X;
        bool valid = true;

        for(int i : A){

            tank = tank + i;

            if(tank < 0 || tank > C){
                valid = false;
                break;
            }
        }

        if(valid){
            return X;
        }

        X++;
    }

    return -1;
}

int main() {

    int N = 4;
    int C = 5;

    vector<int> A = {-1, 1, 1, -1};

    int answer = solve(N, C, A);

    cout << answer << endl;

    return 0;
}