#include <bits/stdc++.h>
using namespace std;

int n;
string s[51];

bool cmp1(const string& s1, const string& s2) {
    if (s1.size() != s2.size())
        return s1.size() < s2.size();
    
    int s1Sum = 0, s2Sum = 0;
    for (char c : s1)
        if (isdigit(c)) s1Sum += c - '0';
    for (char c : s2)
        if (isdigit(c)) s2Sum += c - '0';
    
    if (s1Sum != s2Sum)
        return s1Sum < s2Sum;
    
    return s1 < s2;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> s[i];

    sort(s,s + n,cmp1);
    for (int i = 0; i < n; i++) 
        cout << s[i] << '\n';
    
}