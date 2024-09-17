#include <bits/stdc++.h>
using namespace std;

int t, k, n;
string op;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--){
        multiset<int> s;
        cin >> k;
        while (k--){
            cin >> op >> n;
            if(op == "I") s.insert(n);
            else{
                if(n == 1){
                    if(!s.empty()) s.erase(prev(s.end()));
                }  
                else{
                    if(!s.empty()) s.erase(s.begin());
                }
                    
            }
        }
        if(s.empty()) cout << "EMPTY\n";
        else          cout << *prev(s.end()) << " " << *s.begin() << '\n';
    }
}