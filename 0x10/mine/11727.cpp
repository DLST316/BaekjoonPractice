#include <bits/stdc++.h>
using namespace std;

int DP[1005];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    DP[1] = 1;
    DP[2] = 3;

    for (int i = 3; i <= n; i++) 
        DP[i] = (DP[i-1] + DP[i-2] * 2) % 10007;
    cout << DP[n];
}