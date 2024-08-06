#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

char board[12][6];
bool vis[12][6];
int dx[] = {1,0,-1,0}; 
int dy[] = {0,1,0,-1};

bool bfs(int x, int y) {
    queue<pair<int,int>> q;
    vector<pair<int,int>> group;
    q.push({x,y});
    group.push_back({x,y});
    vis[x][y] = true;
    char color = board[x][y];
    
    while(!q.empty()) {
        auto cur = q.front(); q.pop();
        for(int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= 12 || ny < 0 || ny >= 6) continue;
            if(vis[nx][ny] || board[nx][ny] != color) continue;
            vis[nx][ny] = true;
            q.push({nx,ny});
            group.push_back({nx,ny});
        }
    }
    
    if(group.size() >= 4) {
        for(auto& p : group) board[p.X][p.Y] = '.';
        return true;
    }
    return false;
}

void gravity() {
    for(int j = 0; j < 6; j++) {
        vector<char> col;
        for(int i = 11; i >= 0; i--)
            if(board[i][j] != '.') col.push_back(board[i][j]);
        for(int i = 11; i >= 0; i--)
            board[i][j] = (col.size() > 11-i) ? col[11-i] : '.';
    }
}

int simulate() {
    int chain = 0;
    while(true) {
        for(int i = 0; i < 12; i++) fill(vis[i], vis[i] + 6, false);  
        bool erased = false;
        for(int i = 0; i < 12; i++)
            for(int j = 0; j < 6; j++)
                if(!vis[i][j] && board[i][j] != '.')
                    erased |= bfs(i, j);
        if(!erased) break;
        gravity();
        chain++;
    }
    return chain;
}

int main() {
    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 6; j++)
            cin >> board[i][j];
    
    cout << simulate() << '\n';
    return 0;
}