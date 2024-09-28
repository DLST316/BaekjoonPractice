#include <bits/stdc++.h>
using namespace std;

int arr[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    a *= b * c;
    string s = to_string(a);
    for(auto c : s) arr[c-'0']++;
    for(auto i : arr) cout << i << '\n';
}