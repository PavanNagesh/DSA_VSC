#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number for right shift: ";
    cin >> n;

    int m;
    cout << "Enter number of right shifts: ";
    cin >> m;

    cout << "The reult of " << m << " right shifts of the number " << n << " is: " << (n >> m);
}