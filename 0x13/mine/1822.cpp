#include <bits/stdc++.h>
using namespace std;
int a[500005],b[500005],n,m;
vector<int> subs;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    for (int i = 0; i < n; i++) 
        if(!binary_search(b,b+m,a[i])) 
            subs.push_back(a[i]);
    cout << subs.size() << '\n';
    for(auto it : subs) cout << it << ' ';

}