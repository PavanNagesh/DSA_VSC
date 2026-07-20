// Formula for LCM: lcm(a,b) = (a*b)/gcd(a,b)

#include <iostream>
using namespace std;

int gcd(int n, int m){
    while(n > 0 && m > 0){
        if(n>m){
            n = n%m;
        } else{
            m = m%n;
        }
    }
    if(n == 0) return m;
    return n;
}

int lcm (int n, int m){
    int ans = (n*m)/gcd(n,m);
    return ans;
}

int main(){
    cout << lcm(20,28);
}