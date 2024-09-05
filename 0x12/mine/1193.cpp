#include <bits/stdc++.h>
using namespace std;

int sum,x,i,pos;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> x;
    for(i = 1; sum < x; i++) sum += i;
    pos = x - (sum-(i-1));
    if(i % 2 == 0) cout << i - pos << '/' << pos;
    else cout << pos << '/' << i-pos;
}