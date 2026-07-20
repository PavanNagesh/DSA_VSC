#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int copyN = n;
    int sumCubes = 0;
    while(n != 0){
        int digit = n%10;
        sumCubes += (digit*digit*digit);
        n /= 10;
    }
    return sumCubes == copyN; 
}

int main(){
    int n = 153;

    if(isArmstrong(n)){
        cout << "Number is an armstrong number!";
    }else{
        cout << "Number is NOT an armstrong number!";
    }
    return 0;
}