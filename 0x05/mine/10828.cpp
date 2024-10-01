#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    stack<int> stk;
    
    while (N--){
        string op;
        cin >> op;
        if(op == "push"){
            int x;
            cin >> x;
            stk.push(x);
        }else if(op == "pop"){
            if(stk.empty()) 
                cout << -1 << '\n';
            else{
                cout << stk.top() << '\n';
                stk.pop();
            }
        }else if(op == "size"){
            cout << stk.size() << '\n';;
        }else if(op == "empty"){
            cout << stk.empty() << '\n';
        }else{
            if(stk.empty()) cout << -1 << '\n';
            else            cout << stk.top() << '\n';
        }

    }
    
}