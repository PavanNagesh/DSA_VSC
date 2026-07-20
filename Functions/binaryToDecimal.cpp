#include <iostream>
using namespace std;

int decimal(int x){
    int ans = 0;
    int pow = 1;

    while(x > 0){
        int rem = x % 10;
        ans += rem * pow;

        x /= 10;
        pow *= 2;
    }
    return ans;
}

int main(){

    int a;
    cout << "Enter a binary number to ocnvert to decimal: ";
    cin >> a;
    cout << "The Decimal value for the binary number " << a << " is: " << decimal(a); 

    return 0;
}