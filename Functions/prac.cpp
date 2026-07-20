#include <iostream>
using namespace std;

int fibo(int x){
    int first = 0;
    int second = 1;
    int next;
    for(int i = 1; i <= x; i++){
        cout << first << ", ";
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}


int main() {
    int n;
    cout << "Enter the number for fibonacci series: ";
    cin >> n;
    fibo(n);
    return 0;
}