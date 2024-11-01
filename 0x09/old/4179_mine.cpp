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
    queue<pair<int,int>> fire_Q,person_Q;
    for (int i = 0; i < n; i++) cin >> board[i];
    for(int i = 0; i < n; i++){
        fill(person[i],person[i]+m,-1);
        fill(fire[i],fire[i]+m,-1);
    } 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(board[i][j] == 'F'){
                fire_Q.push({i,j});
                fire[i][j] = 0;
            }
            if(board[i][j] == 'J'){
                person_Q.push({i,j});
                person[i][j] = 0;
            }   
        }
    }
    while(!fire_Q.empty()){
        auto cur = fire_Q.front(); fire_Q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(fire[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            fire[nx][ny] = fire[cur.X][cur.Y] + 1;
            fire_Q.push({nx,ny});
        }
    }
    
    while(!person_Q.empty()){
        auto cur = person_Q.front(); person_Q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m){ // 범위를 벗어났다는 것은 탈출에 성공했다는 의미. 큐에 거리 순으로 들어가므로 최초에 탈출한 시간을 출력하면 됨.
                cout << person[cur.X][cur.Y]+1; 
                return 0;
            }
            if(person[nx][ny] >= 0 || board[nx][ny] == '#' || (fire[nx][ny] != -1 && fire[nx][ny] <= person[cur.X][cur.Y]+1)) continue;
            person[nx][ny] = person[cur.X][cur.Y] + 1;
            person_Q.push({nx,ny});
        }
    }
   cout << "IMPOSSIBLE";
}