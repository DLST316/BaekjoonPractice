#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int n,m,year;
int board[301][301];
int vis[301][301];
void Melt(){
    int zero[301][301] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(board[i][j] == 0) continue;
            for (int dir = 0; dir < 4; dir++) {
                int nx = i + dx[dir];
                int ny = j + dy[dir];
                if((i >= 0 && i < n && j >= 0 && j < m) && board[nx][ny] == 0) zero[i][j]++;
            }
        }
    }
    for(int i = 0; i < n; i++)  for(int j = 0; j < m; j++) board[i][j] = max(0, board[i][j] - zero[i][j]);    
      
}
int GetStatus(){// 0 : 빙산이 다 녹음, 1 : 아직 한 덩이, 2 : 분리됨
    int x = -1, y = -1;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(board[i][j] != 0){
                x = i; y = j;//아무 좌표나 넣기
                cnt1++;
            }
        }
    }
    if(cnt1 == 0 ) return 0;
    for (int i = 0; i < n; i++) fill(vis[i], vis[i] + m, 0);
    queue<pair<int,int>> q;
    vis[x][y] = 1;
    q.push({x,y});
    while (!q.empty()){
        auto cur = q.front(); q.pop();
        cnt2++;
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m)  continue;
            if(vis[nx][ny] || board[nx][ny] <= 0 )  continue;
            q.push({nx,ny});
            vis[nx][ny] = 1;
        }
    }

    if(cnt1 == cnt2) return 1;
    else return 2;
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    while(true){
        year++;
        Melt();
        int status = GetStatus();
        if(status == 0){
            cout << 0 << '\n';
            break;
        }else if(status == 2){
            cout << year << '\n';
            break;
        }
    }
}