#include <iostream>
#include <string>
using namespace std;

bool pallindrome(string a){
    int st = 0;
    int end = a.size()-1;

    while(st < end){
        if(a[st] != a[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main(){
    string a = "madam";
    if(pallindrome(a)){
        cout << "The string is a pallindrome!";
    } else{
        cout << "The string is not a pallindrome";
    }
    return 0;
}