#include <iostream>
using namespace std;

int main () {
    int price1;
    cout << "enter the first price: ";
    cin >> price1;

    int price2;
    cout << "Enter the second price: ";
    cin >> price2;

    cout << "Your total price is: " << price1 + price2 << endl;
    
    cout << !(price1 > price2);
    return 0;
}