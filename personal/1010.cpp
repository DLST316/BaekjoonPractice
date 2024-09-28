#include <bits/stdc++.h>
using namespace std;

int N, M, T;
int dp[31][31]; //메모이제이션 기법. 한번 계산했던건 DP를 쓰면 O(1)에 해결가능

int recur(int m, int n){
  if(dp[m][n] > 0 ) return dp[m][n];
  if(n == 0 || m == n) return 1;
  return dp[m][n] = recur(m-1,n-1) + recur(m-1,n);
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> T;
  while (T--){
    cin >> N >> M;
    cout << recur(M,N) << '\n';
  }
  
}
