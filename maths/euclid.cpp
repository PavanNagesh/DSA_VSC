// euclids optimisticaproach followed
#include <iostream>
using namespace std;

int euclidAlgo(int n, int m){
    while(n > 0 && m > 0){
        if(n > m){
            n = n%m;
        } else{
            m = m%n;
        }
    }
    if(n == 0) return m;
    return n;
}

int main(){
    cout << euclidAlgo(20,28);
}