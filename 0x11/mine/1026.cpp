#include <bits/stdc++.h>
using namespace std;
int A[51],B[51],N,ans;

bool cmp(const int &a,const int &b){
    return a > b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];
    sort(A,A+N);
    sort(B,B+N,cmp);
    for (int i = 0; i < N; i++) 
        ans += A[i] * B[i];
    cout << ans;
}