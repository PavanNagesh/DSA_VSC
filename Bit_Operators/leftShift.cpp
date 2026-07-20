#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number for left shift: ";
    cin >> n;

    int m;
    cout << "Enter the number of left shifts: ";
    cin >> m;


    cout << "Left shift of " << n << " is: " << (n << m);
}