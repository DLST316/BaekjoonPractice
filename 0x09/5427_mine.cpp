#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
char board[1002][1002];
int fire[1002][1002];
int sang[1002][1002];
int t,n,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--){
        bool escape = false;
        cin >> m >> n;
        queue<pair<int,int>> f_queue;
        queue<pair<int,int>> s_queue;
        for (int i = 0; i < n; i++) {
            fill(fire[i], fire[i] + m, -1);
            fill(sang[i], sang[i] + m, -1);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> board[i][j];
                if(board[i][j] == '*'){
                   f_queue.push({i,j});   
                   fire[i][j] = 0;
                }              
                if(board[i][j] == '@'){
                    s_queue.push({i,j});
                    sang[i][j] = 0;
                }                
            }
        }
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cout << board[i][j];
        //     }
        //     cout << "\n";
        // }
        while(!f_queue.empty()){
            auto cur = f_queue.front(); f_queue.pop();
            for (int dir = 0; dir < 4; dir++) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                if(fire[nx][ny]>=0 || board[nx][ny] == '#') continue;
                fire[nx][ny] = fire[cur.X][cur.Y] + 1;
                f_queue.push({nx,ny});
            }
        }
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cout << fire[i][j] << "  ";
        //     }
        //     cout << "\n";
        // }
        while((!s_queue.empty()) && (!escape)){
            auto cur = s_queue.front(); s_queue.pop();
            for (int dir = 0; dir < 4; dir++) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx < 0 || ny < 0 || nx >= n || ny >= m){
                    cout << sang[cur.X][cur.Y] + 1 << '\n';
                    escape = true;
                    break;
                }
                if (board[nx][ny] == '#') continue;
                if (sang[nx][ny] >= 0) continue;
                if(fire[nx][ny] != -1 && fire[nx][ny] <= sang[cur.X][cur.Y] + 1) continue;
                sang[nx][ny] = sang[cur.X][cur.Y] + 1;
                s_queue.push({nx,ny});
            }
        }
        if (!escape) cout << "IMPOSSIBLE" << '\n';
    }
}
