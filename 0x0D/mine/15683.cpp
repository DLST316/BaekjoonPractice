#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n, m;
int board1[10][10], board2[10][10];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
vector<pair<int,int>> cctvs;

void check(int x, int y, int dir){
    dir %= 4;
    while (true) {
        x += dx[dir];
        y += dy[dir];
        if(board2[x][y] == 6 || x < 0 || x >= n || y < 0 || y >= m) return;
        if(board2[x][y] != 0) continue;
        board2[x][y] = 7;
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    int answer = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board1[i][j];
            if(board1[i][j] != 0 && board1[i][j] != 6) cctvs.push_back({i,j});
            if(board1[i][j] == 0) answer++;
        }
    }
    for(int tmp = 0; tmp < (1 << (2 * cctvs.size())); tmp++) { 
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                board2[i][j] = board1[i][j];
        int brute = tmp;  
        for(int i = 0; i < cctvs.size(); i++) {
            int dir = brute % 4;
            brute /= 4;
            int x = cctvs[i].X;
            int y = cctvs[i].Y;
            if(board1[x][y] == 1) {
                check(x,y,dir);
            } else if (board1[x][y] == 2){
                check(x,y,dir);
                check(x,y,dir + 2);
            } else if (board1[x][y] == 3){
                check(x,y,dir);
                check(x,y,dir + 1);
            } else if (board1[x][y] == 4){
                check(x,y,dir);
                check(x,y,dir + 1);
                check(x,y,dir + 2);
            } else {
                check(x,y,dir);
                check(x,y,dir + 1);
                check(x,y,dir + 2);
                check(x,y,dir + 3);
            }
        }
        int tmpAnswer = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(board2[i][j]==0) tmpAnswer++;
            }
        }
        answer = min(tmpAnswer,answer);
    }
    cout << answer;
}