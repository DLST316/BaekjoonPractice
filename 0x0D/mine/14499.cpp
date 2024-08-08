#include <bits/stdc++.h>
using namespace std;

int N,M,K,board[21][21],x,y,dice[4][4];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> x >> y >> K;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin >> board[i][j];
    
    while (K--){
        int op;
        cin >> op;

        if(op == 1){
            if(y+1 >= M) continue;
            y++;
            int val = board[x][y];
            if(val == 0){
                board[x][y] = dice[1][2];
            }else{
                dice[1][2] = val;
                board[x][y] = 0;
            }
            int tmp = dice[1][0];
            dice[1][0] = dice[3][1];
            dice[3][1] = dice[1][2];
            dice[1][2] = dice[1][1];
            dice[1][1] = tmp;
            
        }else if(op == 2){
            if(y-1 < 0) continue;
            y--;
            int val = board[x][y];
            if(val == 0){
                board[x][y] = dice[1][0];
            }else{
                dice[1][0] = val;
                board[x][y] = 0;
            }
            int tmp = dice[1][0];
            dice[1][0] = dice[1][1];
            dice[1][1] = dice[1][2];
            dice[1][2] = dice[3][1];
            dice[3][1] = tmp;

        }else if(op == 3){
            if(x-1 < 0) continue;
            x--;
            int val = board[x][y];
            if(val == 0){
                board[x][y] = dice[0][1];
            }else{
                dice[0][1] = val;
                board[x][y] = 0;
            }
            int tmp = dice[0][1];
            dice[0][1] = dice[1][1];
            dice[1][1] = dice[2][1];
            dice[2][1] = dice[3][1];
            dice[3][1] = tmp;

        }else{
            if(x+1 >= N) continue;
            x++;
            int val = board[x][y];
            if(val == 0){
                board[x][y] = dice[2][1];
            }else{
                dice[2][1] = val;
                board[x][y] = 0;
            }
            int tmp = dice[0][1];
            dice[0][1] = dice[3][1];
            dice[3][1] = dice[2][1];
            dice[2][1] = dice[1][1];
            dice[1][1] = tmp;
        }
        cout << dice[1][1] <<'\n';
    }
    
}