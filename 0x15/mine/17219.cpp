#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> passwords;
int n,m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string url, password;
        cin >> url >> password;
        passwords[url] = password;
    }

    for (int i = 0; i < m; i++) {
        string url;
        cin >> url;
        cout << passwords[url] << '\n';
    }
}