#include <bits/stdc++.h>
using namespace std;

int coins[11];
int n,k,cnt;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for (int i = 0; i < n; i++) 
        cin >> coins[i];
    for (int i = n-1; i <= 0; i--) {
        cnt += k / coins[i];
        k %= coins[i];
    }
    cout << cnt;
}