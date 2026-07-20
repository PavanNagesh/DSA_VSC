// *****
// *****
// *****
// *****
// *****

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// *
// **
// ***
// ****
// *****

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }



// 1
// 12
// 123
// 1234
// 12345

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }



// 1
// 22
// 333
// 4444
// 55555

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << i;
//         }
//         cout << endl;
//     }
// }



// *****
// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//         for(int j = n; j >= i; j--){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }



// 12345
// 1234
// 123
// 12
// 1

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n-i+1; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }



//     *
//    ***
//   *****
//  *******
// *********

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i = 0; i <= n; i++){
//         for(int j = 0; j <= n-i-1; j++){
//             cout << " ";
//         }
//         for(int k = 0; k < 2*i+1; k++){
//             cout << "*";
//         }
//         for(int l = 0; l <= n-i-1; l++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }



// *********
//  *******
//   *****
//    ***
//     *

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i; j++){
//             cout << " ";
//         }

//         for(int k = 0; k < (2*n)-((2*i)+1); k++){
//             cout << "*";
//         }

//         for(int j = 0; j < i; j++){
//             cout << " ";
//         }

//         cout << endl;
        
//     }
// }




//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     *   

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n-i-1; j++){
//             cout << " ";
//         }
//         for(int k = 0; k < 2*i+1; k++){
//             cout << "*";
//         }
//         for(int l = 0; l < n-i-1; l++){
//             cout << " ";
//         }
//         cout << endl;
//     }
//     for(int m = 0; m < n; m++){
//         for(int o = 0; o < m; o++){
//             cout << " ";
//         }
//         for(int p = 0; p < (2*n)-((2*m)+1); p++){
//             cout << "*";
//         }
//         for(int q = 0; q < m; q++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }



// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     for(int i = 1; i <= 2*n-1; i++){
//         int stars = i;
//         if(i>n){
//             stars = 2*n-i;
//         }
//         for(int j = 1; j <= stars; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }




// 1
// 01
// 101
// 0101
// 10101

#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int start = 0;
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            start = 1;
        } else{
            start = 0;
        }
        for(int j = 0; j <= i; j++){
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}