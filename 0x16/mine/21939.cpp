#include <bits/stdc++.h>
using namespace std;

multimap<int,int> ps;//난이도, 문제번호;
int n, m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int p, l;
        cin >> p >> l;
        ps.insert({l,p});
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        string op;
        cin >> op;
        if(op == "add"){
            int p, l;
            cin >> p >> l;
            ps.insert({l,p});
        }else if(op == "recommend"){
            int x;
            cin >> x;
            if(x == 1){//최대 제공 및 겹치면 문제번호 최고
                
            }else{//최소 제공 및 겹치면 문제번호 최소
                
            }
        }else{
            int p;
            ps.lower_bound(p);
        }
    }
}