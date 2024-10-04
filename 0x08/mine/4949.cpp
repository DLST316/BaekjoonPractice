#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(true){
        string s;
        getline(cin, s);
        if(s == ".") break;
        bool is_bal = true;
        stack<char> stk;
        for(auto c : s){
            if(c == '(' || c == '['){
                stk.push(c);
            }else if(c == ')'){
                if(stk.empty() || stk.top() != '('){
                    is_bal = false;
                    break;
                }
                stk.pop();
            }else if(c == ']'){
                if(stk.empty() || stk.top() != '['){
                    is_bal = false;
                    break;
                }
                stk.pop();
            }
        }
        if(!stk.empty()) is_bal = false;
        if(is_bal) cout << "yes\n";
        else       cout << "no\n";
    }
}