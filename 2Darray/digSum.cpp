#include <iostream>
using namespace std;

int digSum(int matrix[][4], int row){
    int sum = 0;
    for(int i = 0; i < row; i++){
        sum += matrix[i][i];
        if(i != row-i-1){
            sum += matrix[i][row-i-1];
        }
    }
    return sum;
}

int main(){
    int matrix[4][4] = {
        {1,3,5,4},
        {2,10,4,7},
        {8,10,5,3},
        {12,4,7,9}  
    };
    int rows = 4;
    cout << digSum(matrix, rows);
    return 0;
}