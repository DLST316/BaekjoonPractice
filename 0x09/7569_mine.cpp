#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int board[101][101][101];
int vis[101][101][101];
int dx[] = {1,0,0,-1,0,0};
int dy[] = {0,1,0,0,-1,0};
int dz[] = {0,0,1,0,0,-1};
int n,m,h;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n >> h;
    queue<tuple<int,int,int>> my_queue;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cin >> board[j][k][i];
                if(board[j][k][i] == 1) my_queue.push({j,k,i});
                if(board[j][k][i] == 0) vis[j][k][i] = -1;
            }
        }
    }
    while (!my_queue.empty()){
        auto cur = my_queue.front(); my_queue.pop();
        int curX, curY, curZ;
        tie(curX, curY, curZ) = cur;
        for (int dir = 0; dir < 6; dir++) {
            int nx = curX + dx[dir];
            int ny = curY + dy[dir];
            int nz = curZ + dz[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h) continue;
            if (vis[nx][ny][nz] >= 0) continue;
            vis[nx][ny][nz] = vis[curX][curY][curZ] + 1;
            my_queue.push({nx,ny,nz});
        }
    }

    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                if (vis[j][k][i] == -1) {
                    cout << -1 << "\n";
                    return 0;
                }
                ans = max(ans, vis[j][k][i]);
            }
        }
    }
    cout << ans << "\n";
    return 0;
    
    
    
    
}