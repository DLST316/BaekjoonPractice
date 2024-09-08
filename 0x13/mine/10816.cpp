#include <bits/stdc++.h>
using namespace std;
int n,m,input;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    cin >> m;
    sort(vec.begin(),vec.end());
    for (int i = 0; i < m; i++) {
        cin >> input;
        cout << upper_bound(vec.begin(),vec.end(),input) - 
                lower_bound(vec.begin(),vec.end(),input) << '\n';
    }
    
}