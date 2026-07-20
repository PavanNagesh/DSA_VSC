// *
// **
// ***
// ****
// *****

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     for(int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// ===========================================================================================================


// *****
// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     for(int i = 1; i <= n; i++) {
//         for (int j = n; j >= i; j--) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// ===========================================================================================================

// 1
// 22
// 333
// 4444

// #include <iostream>
// using namespace std;
// int main (){
//     int n = 4;
//     int num = 1;
//     for (int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << num << " ";
//         }
//         cout << endl;
//         num++;
//     }
//     return 0;
// }

// ===========================================================================================================

// 1
// 12
// 123
// 1234

// #include <iostream>
// using namespace std;
// int main () {
//     int n = 4;
//     for(int i = 1; i<= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;

// }


// ===========================================================================================================


// 1
// 21
// 321
// 4321

// #include <iostream>
// using namespace std;
// int main () {
//     int n = 4;
//     for(int i = 1; i <= n; i++) {
//         for(int j = i; j >= 1; j--) {
//             cout << j << " ";
//         }
//         cout << endl;
//     } 
//     return 0;
// }


// ===========================================================================================================


// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 4;
//     int num = 1;
//     for(int i = 0; i <= n; i++) {
//         for(int j = 1; j <= i; j++){
//             cout << num << " ";
//             num ++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// ===========================================================================================================


// A
// B A 
// C B A 
// D C B A


// #include <iostream>
// using namespace std;
// int main () {
//     int n = 4;
//     for(int i = 1; i <= n; i++) {
//         char ch = 'A';
//         for(int j = i; j >= 1; j--) {
//             cout << char(ch + (j - 1)) << " ";
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// ===========================================================================================================


// 1111
//  222
//   33
//    4  ------------ Inverted Triangle

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 4;
//     int num = 1;
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i-1; j++){
//             cout << " ";
//         }
//         for(int k = n; k >= i; k--) {
//             cout << num;
//         }
//         cout << endl;
//         num++;
//     }
// }


// ===========================================================================================================


//    1
//   121
//  12321
// 1234321

// #include <iostream>
// using namespace std;
// int main () {
//     int n = 4;   
//     for(int i = 1; i <= n; i++) {
//         int num = 1;
//         for(int j = 4; j > i; j--){
//             cout << " ";
//         }
//         for(int k = 1; k <= i; k++){
//             cout << num;
//             num++;
//         }
//         for(int l = i-1; l >= 1; l-- ){
//             cout << l;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// ===========================================================================================================


//    *
//   * *  
//  *   *
// *     *
//  *   *
//   * *
//    *

#include <iostream>
using namespace std;
int main () {
    int n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 3; j >= i; j--){
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}