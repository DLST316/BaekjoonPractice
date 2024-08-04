#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL Pow(LL a, LL b, LL m){
    if(b == 1) return a % m;
    LL val = Pow(a,b/2,m);
    val = val * val % m;
    if(b%2 == 0) return val;
    return val * a % m;
}
LL a,b,m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> m;
    cout << Pow(a,b,m);
}