#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[101][101];
int dist[101][101];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int n, m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) board[i][j] = s[j] - '0';
    }
    queue<pair<int,int>> q;
    dist[0][0] = 1;
    q.push({0,0});
    while (!q.empty()){
        auto cur = q.front(); q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(dist[nx][ny] || board[nx][ny] == 0) continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            q.push({nx,ny});
        }
    }
    cout << dist[n-1][m-1] << '\n';
}