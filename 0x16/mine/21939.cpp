#include <bits/stdc++.h>
using namespace std;

set<int> levels;
set<int> ps[101];
unordered_map<int,int> p2l;
int n, m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int p, l;
        cin >> p >> l;
        levels.insert(l);
        ps[l].insert(p);
        p2l[p] = l;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        string op;
        cin >> op;
        if(op == "add"){
            int p, l;
            cin >> p >> l;
            levels.insert(l);
            ps[l].insert(p);
            p2l[p] = l;
        }else if(op == "recommend"){
            int x;
            cin >> x;
            if(x == 1){//최대 제공 및 겹치면 문제번호 최고
                int level = *(prev(levels.end()));
                cout << *(prev(ps[level].end())) << '\n';
            }else{//최소 제공 및 겹치면 문제번호 최소
                int level = *(levels.begin());
                cout << *(ps[level].begin()) << '\n';
            }
        }else{
            int p;
            cin >> p;
            int level = p2l[p];
            if(ps[level].size() == 1) levels.erase(level);
            ps[level].erase(p);
        }
    }
}