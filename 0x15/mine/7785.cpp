#include <bits/stdc++.h>
using namespace std;

unordered_set<string> s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--){
        string name,op;
        cin >> name >> op;
        if(op == "enter") s.insert(name);
        else s.erase(name);
    }
    vector<string> ans(s.begin(),s.end());
    sort(ans.begin(),ans.end(),greater<>());
    for(auto name : ans) cout << name << '\n';
}