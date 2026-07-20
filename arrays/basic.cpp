#include <iostream>
using namespace std;

int main(){
    int array[5] = {34,59,88,57,44};

    for(int i = 0; i < 5; i++){
        cout << array[i] << " ";
    }

    cout << "\nThe size of array is: " << sizeof(array);

}