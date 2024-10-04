#include <bits/stdc++.h>
using namespace std;

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
#define X first
#define Y second
int vis[505][505];
int board[505][505];
int n,m,cnt,max_area;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            cin >> board[i][j];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(vis[i][j] || board[i][j] == 0) continue;
            cnt++;
            queue<pair<int,int>> q;
            vis[i][j] = 1;
            q.push({i,j});
            int area = 1;
            while (!q.empty()){
                auto cur = q.front(); q.pop();
                for(int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if(board[nx][ny] == 0 || vis[nx][ny]) continue;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                    area++;
                }
            }
            max_area = max(max_area,area);
        }
    }
    cout << cnt << '\n' << max_area;
}