#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[202][202];
int dist[32][202][202];
int w,h,k;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int dx_knight[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy_knight[] = { 1, -1, 2, -2, 2, -2, 1, -1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> w >> h;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++) cin >> board[i][j];
    queue<tuple<int, int, int>> q;
    q.push({0,0,0});
    dist[0][0][0] = 1;
    while (!q.empty()){
        int cur_k,cur_x,cur_y;
        tie(cur_k,cur_x,cur_y) = q.front(); q.pop();
        if(cur_k < k){
            for (int dir = 0; dir < 8; dir++) {
                int nx = cur_x + dx_knight[dir];
                int ny = cur_y + dy_knight[dir];
                if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                if(board[nx][ny]) continue;
                if(dist[cur_k + 1][nx][ny]) continue;
                dist[cur_k + 1][nx][ny] = dist[cur_k][cur_x][cur_y] + 1;
                q.push({cur_k + 1,nx,ny});
            }
        }
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur_x + dx[dir];
            int ny = cur_y + dy[dir];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (board[nx][ny]) continue;
            if (dist[cur_k][nx][ny]) continue;
            dist[cur_k][nx][ny] = dist[cur_k][cur_x][cur_y] + 1;
            q.push({cur_k,nx,ny});
        }
    }
    int ans = INT32_MAX;
    for (int i = 0; i < k + 1; i++) 
        if(dist[i][h-1][w-1]) ans = min(ans,dist[i][h-1][w-1]);
    if(ans != INT32_MAX) cout << ans - 1;
    else cout << -1;
}