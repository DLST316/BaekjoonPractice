#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int board[101][101];
int dist[101][101];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int,int>> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> board[i][j];
            if(board[i][j]){//땅이면
                dist[i][j] = 1;
                q.push({i,j});
            } 
        } 
    }
    while (!q.empty()){
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if(dist > 0) continue;
            
        }
    }
    

        
            
        
}
