#include <bits/stdc++.h>
using namespace std;


int T;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--){
        string s;
        list<char> l;
        auto cursor = l.begin();
        cin >> s;
        for(auto c : s){
            switch (c)
            {
            case '<':
                if(cursor != l.begin()) cursor--;
                break;
            case '>':
                if(cursor != l.end()) cursor++;
                break;
            case '-':
                if(cursor != l.begin()) l.erase(prev(cursor));
                break;
            default:
                l.insert(cursor,c);
                break;
            }
        }
        for(auto el : l) cout << el;
        cout << '\n';
    }
}