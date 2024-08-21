#include <bits/stdc++.h>
using namespace std;

int DP[45][2];

int T,N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    DP[0][0] = 1;
    DP[1][1] = 1;

    for (int i = 2; i <= 40; i++) {
        DP[i][0] = DP[i-1][0] + DP[i-2][0];
        DP[i][1] = DP[i-1][1] + DP[i-2][1];
    }

    cin >> T;
    while (T--){
        cin >> N;
        cout << DP[N][0] << ' ' << DP[N][1] << '\n';
    }
    
}