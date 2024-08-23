#include <bits/stdc++.h>
using namespace std;

long long N,DP[100];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    DP[1] = 1;
    DP[2] = 1;
    for (int i = 3; i <= N; i++) 
        DP[i] = (DP[i-1] + DP[i-2]);
    cout << DP[N];
}