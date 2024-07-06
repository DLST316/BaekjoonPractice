#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[101];
bool vis[101][101];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int cnt, n, m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> board[i];
    m = board[0].size();
    queue<pair<int,int>> my_queue;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] == 0){
                my_queue.push({i,j});
                vis[i][j] = true;
                char c = board[i][j];
                cnt++;
                while (!my_queue.empty()){
                    auto cur = my_queue.front(); my_queue.pop();
                    for (int dir = 0; dir < 4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if(board[nx][ny] != board[cur.X][cur.Y] || vis[nx][ny]) continue;
                        vis[nx][ny] = true;
                        my_queue.push({nx,ny});
                    }
                }  
            } 
        }
    }
    cout << cnt << " ";
    cnt = 0;
    for (int i = 0; i < n; i++) fill(vis[i], vis[i] + m, 0);
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (board[i][j] == 'G')
            board[i][j] = 'R';
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] == 0){
                my_queue.push({i,j});
                vis[i][j] = true;
                char c = board[i][j];
                cnt++;
                while (!my_queue.empty()){
                    auto cur = my_queue.front(); my_queue.pop();
                    for (int dir = 0; dir < 4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if(board[nx][ny] != board[cur.X][cur.Y] || vis[nx][ny]) continue;
                        vis[nx][ny] = true;
                        my_queue.push({nx,ny});
                    }
                }  
            } 
        }
    }
    cout << cnt;
    
    
       
}