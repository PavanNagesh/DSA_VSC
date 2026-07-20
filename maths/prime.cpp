#include <iostream>
using namespace std;

bool isPrime(int num){
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0){
            return "Not Prime";
        }
    }
    return "Prime";
}

string ans(int n){
    if(isPrime(n)){
        cout << "Prime";
    }else{
        cout << "Not Prime";
    }
}

int main(){
    int num;
    cout << "Enter a number to find if Prime: ";
    cin >> num;

    cout << ans(num);
    return 0;

}