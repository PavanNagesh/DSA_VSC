#include <iostream>
using namespace std;

int addNum(int a, int b){
    int sum = a + b;
    return sum;
}

int findMin(int a, int b){
    int min;
    if(a < b){
        min = a;
    } else{
        min = b;
    }

    return min;
}

int main (){
    int a;
    cout << "Enter the First number: ";
    cin >> a;

    int b;
    cout << "Enter the Second number: ";
    cin >> b;

    cout << "The sum of two numbers is: " << addNum(a,b) << endl;

    cout << "The minimum of two numbers is: " << findMin(a,b) << endl;

}