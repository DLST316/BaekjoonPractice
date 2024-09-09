#include <bits/stdc++.h>
using namespace std;
int n,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    cin >> m;
    sort(vec.begin(),vec.end());
    while (m--){
        int x;
        cin >> x;
        cout << binary_search(vec.begin(),vec.end(),x) << '\n';
    }
    
}
