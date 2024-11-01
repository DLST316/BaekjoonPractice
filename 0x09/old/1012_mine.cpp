#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[51][51];
bool vis[51][51];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n,m,t,k,cnt,x,y;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        cin >> m >> n >> k;
        for(int i = 0; i < n; i++){
            fill(board[i],board[i] + m,0); 
            fill(vis[i],vis[i] + m,false); 
        } 
        cnt = 0;
        while(k--){
            cin >> x >> y;
            board[y][x] = 1;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(vis[i][j] || board[i][j] == 0) continue;
                queue<pair<int,int>> my_queue;
                cnt++;
                vis[i][j] = true;
                my_queue.push({i,j});
                while(!my_queue.empty()){
                    auto cur = my_queue.front(); my_queue.pop();
                    for(int dir = 0; dir < 4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if(vis[nx][ny] || board[nx][ny] == 0) continue;
                        vis[nx][ny] = true;
                        my_queue.push({nx,ny});
                    }
                }
            }
        }
        cout << cnt << '\n';
    }
}
