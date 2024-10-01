#include <bits/stdc++.h>
using namespace std;

stack<int> stk;
int sum, n, x;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while (n--){
        cin >> x;
        if(x) stk.push(x);
        else  stk.pop();
    }

    while (!stk.empty()){
        sum += stk.top(); stk.pop();
    }
    cout << sum;
    
}