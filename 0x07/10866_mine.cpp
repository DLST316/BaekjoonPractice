#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string op;
    deque<int> D;
    cin >> n;
    while(cin >> op){
        if(op == "push_front"){
            cin >> n;
            D.push_front(n);
        }else if(op == "push_back"){
            cin >> n;
            D.push_back(n);
        }else if(op == "pop_front"){
            if(D.empty()) cout << "-1\n";
            else{
                cout << D.front() << '\n';
                D.pop_front();
            }
        }else if(op == "pop_back"){
            if(D.empty()) cout << "-1\n";
            else{
                cout << D.back() << '\n';
                D.pop_back();
            }
        }else if(op == "size"){
            cout << D.size() << '\n';
        }else if(op == "empty"){
            cout << D.empty() << '\n';
        }else if(op == "front"){
            if(D.empty()) cout << "-1\n";
            else{
                cout << D.front() << '\n';
            }
        }else{
            if(D.empty()) cout << "-1\n";
            else{
                cout << D.back() << '\n';
            }
        }
    }
}