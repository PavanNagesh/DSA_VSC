// You are given an integer array prices where prices[i] represents the price of a stock on the ith day.
// For each day i, compute the stock span, which is defined as the maximum number of consecutive days (ending on day i) for which the stock price was less than or equal to the price on day i.
// Return an integer array span where span[i] is the stock span for the ith day.

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    vector<int> price = {100, 80, 60, 70, 60, 75, 85};

    vector<int> ans(price.size(), 0);

    stack<int> s;

    for(int i = 0; i < price.size(); i++){
        while(s.size() > 0 && price[s.top()] <= price[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i] = i+1;
        } else{
            ans[i] = i - s.top();
        }

        s.push(i);
    }

    for(int val : ans){
        cout << val << " ";
    }

    return 0;
}