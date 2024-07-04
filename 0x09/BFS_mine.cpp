#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second 
int     board[502][502];
bool    vis[502][502];
int     n,m;
int     dx[4] = {1,0,-1,0};
int     dy[4] = {0,1,0,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int,int>> my_queue;
    vis[0][0] = 1;
    my_queue.push({0,0}); // 시작점 삽입 
    while(!my_queue.empty()){
        pair<int,int> cur = my_queue.front(); my_queue.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || ny << 0 || nx >= n || ny >= m) continue;
            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = 1;
            my_queue.push({nx,ny});
        }
    }
    
}