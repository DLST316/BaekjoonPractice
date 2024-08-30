#include <bits/stdc++.h>
using namespace std;
int a,b;
vector<bool> isprime(1000005,true);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    isprime[0] = isprime[1] = false;
    for(int i = 2; i*i <= b; i++ ){//루트 n만큼만 돌면서
        if(!isprime[i]) continue;
        for(int j = i * i; j <= b; j += i) 
            isprime[j] = false;// 소수의 배수들 전부 제거
    }
    for(int i = a; i <= b; i++)
        if(isprime[i]) cout << i << '\n';
    
}