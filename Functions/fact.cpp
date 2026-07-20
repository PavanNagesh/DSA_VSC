// factorial

#include <iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int main () {
    int x;
    cout << "Enter a number for factorial: ";
    cin >> x;
    
    if(x < 0){
        cout << "Invalid number";
    } else {
        cout << "Factorial of " << x << " numbers is: " << fact(x);
    }
    
}

