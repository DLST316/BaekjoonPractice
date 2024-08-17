#include <bits/stdc++.h>
using namespace std;
int n;
string s[20005];

bool cmp(const string& s1, const string& s2){
    if(s1.size() != s2.size()) return s1.size() < s2.size();
    else return s1 < s2;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> s[i];
    sort(s, s+n, cmp);
    string before = "";
    for (int i = 0; i < n; i++){
        if(before != s[i])
            cout << s[i] << '\n';
        before = s[i];
    }
        
}