#include <iostream>
using namespace std;

int binary(int x){
    int ans = 0;
    int pow = 1;
    
    while (x > 0){
        int rem = x%2;
        x = x/2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main() {

    int x;
    cout << "Enter the decimal number to find binary of: ";
    cin >> x;
    cout << "The binary value for " << x << " is: " << binary(x);
    
    return 0;
}