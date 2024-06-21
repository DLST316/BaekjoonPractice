#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    char op;
    cin >> s;

    list<char> list;
    for (auto c : s) list.push_back(c);
    auto cursor = list.end();
    int q;
    cin >> q;
    while(q--){
        cin >> op;
        if(op == 'L'){
            if(cursor != list.begin()) cursor--;
        } else if(op == 'D'){
            if(cursor != list.end()) cursor ++;
        } else if(op == 'B'){
            if(cursor != list.begin())
                cursor = list.erase(--cursor);
        } else {
            char add;
            cin >> add;
            list.insert(cursor,add);
        }
    }

    for(auto c : list) cout << c;
}