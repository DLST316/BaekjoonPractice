#include <bits/stdc++.h>
using namespace std;
int n, m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector<int> ns(n);
    for(int i=0; i<n; i++) cin >> ns[i];
    cin >> m;
    sort(ns.begin(),ns.end());
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        cout << binary_search(ns.begin(),ns.end(),x) << '\n';
    }
}