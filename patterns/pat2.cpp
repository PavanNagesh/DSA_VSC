// 1 2 3
// 4 5 6
// 7 8 9

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 3;
//     int m = 3;
//     int num = 1;
//     for(int i = 1; i <= n; i++) {
//         for (int j = 1; j <=m; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }




// A B C
// D E F
// G H I

#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int m = 3;
    char ch = 'A';
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++) {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}