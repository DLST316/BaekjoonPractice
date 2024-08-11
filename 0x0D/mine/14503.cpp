#include <bits/stdc++.h>
using namespace std;

int n,m,r,c,d;
int board[51][51];
int dx[] = {-1,0,1,0}; //북 동 남 서
int dy[] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> r >> c >> d;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            cin >> board[i][j];

    int ans = 0;
    while(1){
        if(!board[r][c]){
            board[r][c] = -1;
            ans++;
        }
        //주변 4칸 탐색
            bool notCleaned = true; //청소 더 이상 못함

            for (int i = 0; i < 4; i++) {
                d = (d+3) % 4;
                int nr = r + dx[d];
                int nc = c + dy[d];
                if(board[nr][nc] == 0){
                    r = nr; c = nc;
                    notCleaned = false;
                    break;
                }
            }

            if(!notCleaned) continue;
            if(board[r - dx[d]][c - dy[d]] == 1)
                break;
            r -= dx[d];
            c -= dy[d];
    }

    cout << ans;
}