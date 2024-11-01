#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[] = {-2,-1, 1, 2, 2, 1,-1,-2};
int dy[] = {1 , 2, 2, 1,-1,-2,-2,-1};
int t,n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        int dist[n][n];
        for(int i = 0; i < n; i++) fill(dist[i],dist[i] + n, -1);
        int start_x,start_y,dest_x,dest_y;
        cin >> start_x >> start_y >> dest_x >> dest_y;
        queue<pair<int,int>> my_queue;
        my_queue.push({start_x,start_y});
        dist[start_x][start_y] = 0;
        while(!my_queue.empty()){
            auto cur = my_queue.front(); my_queue.pop();
            for(int dir = 0; dir < 8; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
                if(dist[nx][ny] >= 0) continue;
                dist[nx][ny] = dist[cur.X][cur.Y] + 1;
                my_queue.push({nx,ny});
            }
        }
        cout << dist[dest_x][dest_y] << '\n';
        
    }
    
}