#include <iostream>
using namespace std;

int rev(int n){
    int revNum = 0;
    while(n != 0){
        int digit = n%10;
        
        revNum = revNum * 10 + digit;
        n /= 10;
    }
    return revNum;
}

int main(){
    cout << rev(1982);
    return 0;
}