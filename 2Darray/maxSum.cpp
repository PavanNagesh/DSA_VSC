#include <iostream>
#include <climits>
using namespace std;

int calSum(int matrix[][4], int row, int col){
    int largestSum = INT_MIN;
    for(int i = 0; i < row; i++){
        int maxRow = 0;
        for(int j = 0; j < col; j++){
            maxRow = maxRow + matrix[i][j];
        }
        largestSum=max(maxRow, largestSum);
    }
    return largestSum;
}

int main(){
    int matrix [3][4] = {
        {1,2,3,4},
        {7,-6,4,12},
        {12,9,17,11}
    };

    int row = 3;
    int col = 4;

    cout << calSum(matrix, row, col);
    return 0;
}