#include <bits/stdc++.h>
using namespace std;

int N,DP[1000005],pre[1000005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 2; i <= N; i++) {
        DP[i] = DP[i-1] + 1;
        pre[i] = i-1;
        if(i%3 == 0 && (DP[i/3] + 1 < DP[i])) {    
            DP[i] = DP[i/3] + 1;
            pre[i] = i/3;      
        } 
        if(i%2 == 0 && (DP[i/2] + 1 < DP[i])) {
            DP[i] = DP[i/2] + 1;
            pre[i] = i/2;
            
        }   
    }

    cout << DP[N] << '\n';
    while (true){
        cout << N << ' ';
        if(N == 1) break;
        N = pre[N];
    }
}