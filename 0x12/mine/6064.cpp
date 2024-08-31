#include <bits/stdc++.h>
using namespace std;
int x,y,m,n,t;

int lcm(int a, int b){
    return a / __gcd(a,b) * b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> m >> n >> x >> y;
        if(x == m) x = 0;
        if(y == n) y = 0;
        int l = lcm(m,n);
        bool answered = false;
        for(int i = x; i <= l; i+=m){
            if(i == 0) continue;
            if(i % n == y){
                cout << i <<'\n';
                answered = true;
                break;
            }
        }
        if(!answered) cout << -1 <<'\n';
    }
}