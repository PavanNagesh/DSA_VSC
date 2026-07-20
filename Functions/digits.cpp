#include <iostream>
using namespace std;

int digits(int number){
    cout <<"The digits of the number are: \n";
    while(number != 0){
        int digit = number % 10;
        cout << digit << endl;
        number /= 10;
    }
}

int count(int number){
    int count = 0;
    cout <<"\nThe number of digits in the number are: ";
    while(number != 0){
        count++;
        number /= 10;
    }
    cout << count;
}

int main(){
    int n = 1423;
    digits(n);
    count(n);
    return 0;
}