#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    deque<int> dq;
    while(n--){
        string op;
        cin >> op;
        if(op == "push_front"){
            int x;
            cin >> x;
            dq.push_front(x);
        }else if(op == "push_back"){
            int x;
            cin >> x;
            dq.push_back(x);
        }else if(op == "pop_front"){
            if(dq.empty()) cout << -1 << '\n';
            else{
                cout << dq.front() << '\n';
                dq.pop_front();
            } 
        }else if(op == "pop_back"){
            if(dq.empty()) cout << -1 << '\n';
            else{
                cout << dq.back() << '\n';
                dq.pop_back();
            } 
        }else if(op == "size"){
            cout << dq.size() << "\n";
        }else if(op == "empty"){
            cout << dq.empty() << '\n';
        }else if(op == "front"){
            if(dq.empty()) cout << -1 << '\n';
            else           cout << dq.front() << '\n';
        }else {
            if(dq.empty()) cout << -1 << '\n';
            else           cout << dq.back() << '\n';
        }
    }
}