#include <bits/stdc++.h>
using namespace std;
int n,cnt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        stack<char> stk;
        for (auto &&c : s){
            if(!stk.empty() && stk.top() == c) stk.pop();
            else                               stk.push(c);
        }
        if(stk.empty()) cnt++;
    }
    cout << cnt;
}