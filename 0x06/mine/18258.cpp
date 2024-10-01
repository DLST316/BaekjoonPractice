#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    queue<int> Q;
    while(n--){
        string op;
        cin >> op;
        if(op == "push"){
            int x;
            cin >> x;
            Q.push(x);
        }else if(op == "pop"){
            if(!Q.empty()){
                cout << Q.front() << '\n';
                Q.pop();
            }else{
                cout << -1 << '\n';
            }
        }else if(op == "size"){
            cout << Q.size() << '\n';
        }else if(op == "empty"){
            cout << Q.empty() << '\n';
        }else if(op == "front"){
            if(!Q.empty()) cout << Q.front() << '\n';
            else cout << -1 << '\n';
        }else{
            if(!Q.empty()) cout << Q.back() << '\n';
            else cout << -1 << '\n';
        }
    }
}