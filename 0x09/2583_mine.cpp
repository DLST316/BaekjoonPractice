#include <bits/stdc++.h>
using namespace std;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int board[101][101];
int dist[101][101];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n,k;
    cin >> m >> n >> k;
    while(k--){//보드 채우기
        int left_x, left_y, right_x, right_y;
        cin >> left_x >> left_y >> right_x >> right_y;
        int x_diff = right_x - left_x;
        int y_diff = right_y - left_y;
        for (int i = 0; i < x_diff; i++) 
            for (int j = 0; j < y_diff; j++) board[left_y + j][left_x + i] = 1;
    }
    queue<pair<int,int>> q;
    int cnt = 0;
    vector<int> v;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(board[i][j] == 0 && dist[i][j] == 0){
                cnt++;
                int area = 0;
                dist[i][j] = 1;
                q.push({i,j});
                while (!q.empty()){
                    auto cur = q.front(); q.pop(); area++;
                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                        if(dist[nx][ny] != 0 || board[nx][ny] == 1) continue; // 눈금이거나 이미 방문한 지역이면 거르기
                        dist[nx][ny] = dist[cur.first][cur.second] + 1;
                        q.push({nx,ny});
                    }
                }
                v.push_back(area);
            }
        }
    }
    
    sort(v.begin(),v.end());
    cout << cnt << '\n';
    for(auto it : v)    cout << it << ' ';
    

}