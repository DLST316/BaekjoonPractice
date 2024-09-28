#include <bits/stdc++.h>
using namespace std;

list<char> l;
int m;
char op;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for(auto c : s) l.push_back(c);
    cin >> m;
    auto cursor = l.end();
    while(m--){
        cin >> op;
        switch (op)
        {
        case 'L':
            if(cursor != l.begin()) cursor--;
            break;
        case 'D':
            if(cursor != l.end()) cursor++;
            break;
        case 'B':
            if(cursor != l.begin()) l.erase(prev(cursor));
            break;
        case 'P':
            char tmp;
            cin >> tmp;
            l.insert(cursor,tmp);
            break;
        
        }
    }

    for(auto el : l) cout << el;
    
}