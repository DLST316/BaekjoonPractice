#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string op;
    queue<int> q;
    cin >> n;

    while(cin >> op){
        if(op == "push"){
            cin >> n;
            q.push(n);
        }else if(op == "pop"){
            if(!q.empty()){
                cout << q.front() << "\n";
                q.pop();
            }else{
                cout << -1 << '\n';
            }
        }else if(op == "size"){
            cout << q.size() << '\n';
        }else if(op == "empty"){
            cout << q.empty() << "\n";
        }else if(op == "front"){
            if(!q.empty()){
                cout << q.front() << "\n";
            }else{
                cout << -1 << '\n';
            }
        }else{
            if(!q.empty()){
                cout << q.back() << "\n";
            }else{
                cout << -1 << '\n';
            }
        }
    }
    
}
