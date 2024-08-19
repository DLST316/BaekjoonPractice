#include <bits/stdc++.h>
using namespace std;

int DP[1005][3];
int arr[1005][3];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        
    DP[0][0] = arr[0][0];
    DP[0][1] = arr[0][1];
    DP[0][2] = arr[0][2];

    for (int i = 1; i < n; i++) {
        DP[i][0] = min(DP[i-1][1],DP[i-1][2]) + arr[i][0];
        DP[i][1] = min(DP[i-1][0],DP[i-1][2]) + arr[i][1];
        DP[i][2] = min(DP[i-1][1],DP[i-1][0]) + arr[i][2];
    }
    int ans = min({DP[n-1][0], DP[n-1][1], DP[n-1][2]});
    
    cout << ans;
}