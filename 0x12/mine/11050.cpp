#include <bits/stdc++.h>
using namespace std;
int n,k,ans = 1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = n; i >= n-k+1; i--) 
        ans *= i;
    for(int i = 1; i < k+1; i++) 
        ans /= i;

    cout << ans;
}