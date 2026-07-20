#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s1;

    cout << "Stack basic Demonstration" << endl;
    s1.push(3);
    s1.push(7);
    s1.push(4);

    while(!s1.empty()){
        cout << s1.top();
        s1.pop();
    }

    cout << "\n\nStack swapping demo. Stack successfully pushed into s2";
    stack<int> s2;
    s2.push(12);
    s2.push(9);
    s2.push(22);

    cout << "\n\nNow swapping Stacks";

    stack<int> s3;
    s3.swap(s2);

    cout << "\n\nSwapped stack in s3" << endl;
    while(!s3.empty()){
        cout << s3.top();
        s3.pop();
    }
}