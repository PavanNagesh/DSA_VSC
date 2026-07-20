// nCr = n!/r!*(n-r)!

#include <iostream>
using namespace std;

int fact(int num){
    int factn = 1;
    for(int i = 1; i <= num; i++){
        factn = factn * i;
    }
    return factn;
}

int comb(int n, int r){
    int c = (fact(n))/(fact(r)*fact(n-r));
    return c;
}


int main () {
    int a;
    cout << "Enter the number for 'n': ";
    cin >> a;

    int b;
    cout << "Enter the number for 'r': ";
    cin >> b;

    cout << "The nCr value for the values n = " << a << " & r = " << b << " is: " << comb(a,b);
    return 0;
}
