#include <bits/stdc++.h>
using namespace std;

int N,M;
int DP[100005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        if(i) DP[i] = DP[i-1] + tmp;
        else DP[i] = tmp;
    }

    while (M--){
        int i, j;
        cin >> i >> j;
        cout << DP[j-1] - DP[i-2] << '\n'; //0-index
    }
}