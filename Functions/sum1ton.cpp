// sum of numbers from 1 to n

#include <iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}

int main () {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    cout << "Sum of numbers from 1 to " << a << " is: " << sum(a);
}