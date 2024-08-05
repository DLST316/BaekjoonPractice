#include <bits/stdc++.h>
using namespace std;

void func(int k,char* s,int st) {
    if(k == 1) return;
    int third = k/3;
    fill(s + third + st,s + 2*third + st,' ');
    func(third, s, st);
    func(third, s, st + 2* third);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n){
        char s[600000];
        int len = pow(3, n);  
        fill(s, s + len, '-');
        s[len] = '\0';  
        func(len, s, 0);
        cout << s << '\n';
    }
    
}