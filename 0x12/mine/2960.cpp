#include <bits/stdc++.h>
using namespace std;
int n,k,cnt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    vector<bool> isprime(n+1,true);
    isprime[0] = isprime[1] = false;

    for(int i = 2; i <= n; i++ ) {
        if(!isprime[i]) continue;
        for(int j = i; j <= n; j += i){
            if(!isprime[j]) continue;
            isprime[j] = false;
            cnt++;
            if(cnt == k){
                cout << j;
                break;
            }
        }
    }
}
