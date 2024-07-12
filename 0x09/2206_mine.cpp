#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int board[1005][1005];
int dist[1005][1005][2];
int n,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            board[i][j] = c - '0';
        }
    }
    queue<tuple<int,int,int>> my_queue;
    my_queue.push({0,0,0});
    dist[0][0][0] = 1;
    while(!my_queue.empty()){
        int curX,curY,broken;
        tie(curX,curY,broken) = my_queue.front(); my_queue.pop();
        if(curX == n-1 && curY == m-1){
            cout << dist[curX][curY][broken];
            return 0;
        }
        for (int dir = 0; dir < 4; dir++) {
            int nx = curX + dx[dir];
            int ny = curY + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(dist[nx][ny][broken]) continue;
            if(!board[nx][ny]){//0이면 실행
                dist[nx][ny][broken] = dist[curX][curY][broken] + 1;
                my_queue.push({nx,ny,broken});
            }else if(board[nx][ny] && !broken){//1인데 처음 부수면 ㅇㅈ
                dist[nx][ny][1] = dist[curX][curY][0];
                dist[nx][ny][1] = dist[curX][curY][0] + 1;
                my_queue.push({nx,ny,1});
            }
        }
    }
    cout << -1;

}