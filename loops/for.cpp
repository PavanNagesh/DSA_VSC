#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int sum = 0;
    for(int i = 0; i<=n; i++){
        if (i%2 == 0){
            sum = sum + i;
        }    
    }
    cout << "The sum of even numbers from 0 to " << n << " is: " << sum << endl; 
    return 0;
}