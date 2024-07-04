#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second 
string  board[1002];
int     fire[1002][1002];
int     person[1002][1002];
int     n,m;
int     dx[4] = {1,0,-1,0};
int     dy[4] = {0,1,0,-1};
int     ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    queue<pair<int,int>> my_queue;
    for (int i = 0; i < n; i++) cin >> board[i];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(board[i][j] == 'F'){
                my_queue.push({i,j});
            }
        }
    }
    while(!my_queue.empty()){
        auto cur = my_queue.front(); my_queue.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(fire[nx][ny] > 0 || board[nx][ny] == '#') continue;
            fire[nx][ny] = fire[cur.X][cur.Y] + 1;
            my_queue.push({nx,ny});
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << board[i][j];
        }
        cout << '\n';
    }
    cout << "##########################\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << fire[i][j];
        }
        cout << '\n';
    }
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < m; j++){
    //         if(board[i][j] == 'J') my_queue.push({i,j});
    //     }
    // }
    // while(!my_queue.empty()){
    //     auto cur = my_queue.front(); my_queue.pop();
    //     for(int dir = 0; dir < 4; dir++){
    //         int nx = cur.X + dx[dir];
    //         int ny = cur.Y + dy[dir];
    //         if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
    //         if(person[nx][ny] > 0 || board[nx][ny] != '#' || person[nx][ny] >= fire[nx][ny] ) continue;
    //         person[nx][ny] = person[cur.X][cur.Y] + 1;
    //         my_queue.push({nx,ny});
    //     }
    // }
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < m; j++){
    //         ans = max(person[i][j],ans);
    //     }
    // }
    // if(ans == 0) cout << "IMPOSSIBLE";
    // else         cout << ans;
}