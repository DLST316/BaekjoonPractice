#include <bits/stdc++.h>
using namespace std;

list<int> ls;
int n,k;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) ls.push_back(i+1);
    auto it = ls.begin();
    cout << "<";
    while (!ls.empty()){
        for (int i = 0; i < k-1; i++) {
            if(next(it) != ls.end()) it++;
            else it = ls.begin();
        }
        cout << *it;
        if(ls.size() != 1) cout << ", ";
        it = ls.erase(it);
        if(it == ls.end()) it = ls.begin();
    }
    cout << ">";
     
    
}