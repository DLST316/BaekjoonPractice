#include <bits/stdc++.h>
using namespace std;

int n, answer;
int tmpBoard[21][21], board[21][21];

void rotate(){
    int tmp[21][21];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            tmp[i][j] = tmpBoard[i][j];

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            tmpBoard[i][j] = tmp[n-1-j][i];
}

void tilt(int dir){
    while(dir--) rotate();
    for (int i = 0; i < n; i++) {
        int tilted[21] = {};
        int idx = 0;
        for (int j = 0; j < n; j++) {
            if(!tmpBoard[i][j]) continue;
            if(!tilted[idx]) tilted[idx] = tmpBoard[i][j];
            else if(tilted[idx] == tmpBoard[i][j]) tilted[idx++] *= 2;
            else tilted[++idx] = tmpBoard[i][j];
        }
        for(int j = 0; j < n; j++) tmpBoard[i][j] = tilted[j];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            cin >> board[i][j];
        
    for (int caseOfMove = 0; caseOfMove < (1 << (2 * 5)); caseOfMove++) { // 4^5개의 가능 한 모든 경우의 수를 돌림
        int tmp = caseOfMove;
        for (int i = 0; i < 21; i++) 
            for (int j = 0; j < 21; j++) 
                tmpBoard[i][j] = board[i][j];
        for (int i = 0; i < 5; i++) {
            int dir = tmp % 4;
            tmp /= 4;
            tilt(dir);
        }
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < n; j++) 
                answer = max(answer,tmpBoard[i][j]);
    }
    cout << answer;
}