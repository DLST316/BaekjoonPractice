#include <bits/stdc++.h>
using namespace std;

int D[305][3];
int stair[305];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> stair[i];
    D[0][1] = stair[0];
    D[0][2] = 0;
    D[1][1] = stair[1];
    D[1][2] = stair[0] + stair[1];
    for (int i = 2; i < n; i++) {
        D[i][1] = max(D[i-2][1],D[i-2][2]) + stair[i];
        D[i][2] = D[i-1][1] + stair[i];
    }

    cout << max(D[n-1][1],D[n-1][2]);
}