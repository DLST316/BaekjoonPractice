#include <bits/stdc++.h>
using namespace std;

int64_t a,b,c;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c;
    int64_t ans = 1;
    for(int64_t i = 0; i < b; i++){
        ans *= a;
        ans %= c;
    }
    cout << ans;
}