// 145 = 1+4+5 = 10

#include <iostream>
using namespace std;

int sumDigits(int x){
    int sum = 0;
    int lastDigit;
    while(x > 0){
        lastDigit = x % 10;
        x = x / 10;
        sum += lastDigit;
    }
    return sum;
}

int main (){
    
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The sum of digits of " << n << " is: " << sumDigits(n);

    return 0;
}