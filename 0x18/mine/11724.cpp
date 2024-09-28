#include <bits/stdc++.h>
using namespace std;
bool vis[1005];
vector<int> vec[1005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if(vis[i]) continue;
        cnt++;
        queue<int> q;
        q.push(i);
        vis[i] = true;
        while (!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto nxt : vec[cur]){
                if(vis[nxt]) continue;
                q.push(nxt);
                vis[nxt] = true;
            }
        }
        
    }
    cout << cnt;
}