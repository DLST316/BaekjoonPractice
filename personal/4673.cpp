#include <bits/stdc++.h>
using namespace std;
bool is_not_selfnumber[10001];
int D(int n){
    string s = to_string(n);
    for(auto c : s) n += c-'0';
    return n;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 10000; i++) {
        int dr = D(i+1);
        if(dr <= 10000)is_not_selfnumber[dr] = true;
    }
    for(int i = 0; i < 10000; i++) if(!is_not_selfnumber[i+1]) cout << i+1 << '\n';
    
}