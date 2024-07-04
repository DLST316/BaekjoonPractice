#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second 
int board[1002][1002];
int dist[1002][1002];
int n,m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;
    queue<pair<int,int>> my_queue;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
            if(board[i][j] == 1)    my_queue.push({i,j});
            if(board[i][j] == 0)    dist[i][j] = -1;
        }
    }
    while(!my_queue.empty()){
        auto cur = my_queue.front(); my_queue.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(dist[nx][ny] >= 0) continue; // 시작점이거나 이미 가봤던 곳은 거름
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            my_queue.push({nx,ny});
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(dist[i][j] == -1){
                cout << -1;
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    } 
    cout << ans;
}