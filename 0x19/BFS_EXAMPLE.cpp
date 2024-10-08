#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10];
bool vis[10];
void bfs(){
    queue<int> q;
    q.push(1);
    vis[1] = 1;

    while (!q.empty()){
        /* code */
        int cur = q.front();
        q.pop();
        cout << cur << ' ';
        for (auto nxt : adj[cur]){
            if(vis[nxt]) continue;
            q.push(nxt);
            vis[nxt] = true;
        }
    }
    
}