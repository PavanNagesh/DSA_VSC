#include <iostream>
using namespace std;

bool linSearch(int matrix[][3], int row, int col, int key){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(matrix[i][j] == key){
                pair <int, int> ans = {i, j};
                cout << "Found! The place is: " << "(" << ans.first << "," << ans.second << ")" << endl;
                return true;
            }
        }
    }
    cout << "Not found!";
    return false;
}

int main(){
    int m[4][3] = {
        {3,2,5},
        {7,4,1},
        {9,71,8},
        {1,22,15}
    };

    int rows = 3;
    int cols = 4;
    int key = 71;

    linSearch(m, rows, cols, key);
}