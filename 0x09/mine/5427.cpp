#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
char board[1005][1005];
int fire[1005][1005];
int person[1005][1005];
int t,n,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        cin >> m >> n;
        queue<pair<int,int>> PQ;
        queue<pair<int,int>> FQ;
        for (int i = 0; i < n; i++){
            fill(person[i],person[i]+m,0);
            fill(fire[i],fire[i]+m,0);
        } 
        
        bool isEscape = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> board[i][j];            
                if(board[i][j] == '@'){
                    PQ.push({i,j});
                    person[i][j] = 1;
                } 
                if(board[i][j] == '*'){
                    FQ.push({i,j});
                    fire[i][j] = 1;
                } 
            }
        }
        while(!FQ.empty()){
            auto cur = FQ.front(); FQ.pop();
            for(int dir = 0; dir < 4; dir++){
                auto nx = cur.X + dx[dir];
                auto ny = cur.Y + dy[dir];
                if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                if(board[nx][ny] == '#') continue;
                if(fire[nx][ny]) continue;
                FQ.push({nx,ny});
                fire[nx][ny] = fire[cur.X][cur.Y]+1;
            }
        }
       
        
        while(!PQ.empty() && !isEscape){
            auto cur = PQ.front(); PQ.pop();
            for(int dir = 0; dir < 4; dir++){
                auto nx = cur.X + dx[dir];
                auto ny = cur.Y + dy[dir];
                if(nx < 0 || ny < 0 || nx >= n || ny >= m){
                    isEscape = true;
                    cout << person[cur.X][cur.Y] << '\n';
                    break;
                } 
                if(board[nx][ny] == '#' || person[nx][ny]) continue;
                if((fire[nx][ny] != 0) && person[cur.X][cur.Y]+1 >= fire[nx][ny]) continue;
                PQ.push({nx,ny});
                person[nx][ny] = person[cur.X][cur.Y]+1;
            }
        }
        
        if(!isEscape) cout << "IMPOSSIBLE\n"; 
    }
}