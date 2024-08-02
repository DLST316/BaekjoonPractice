#include <bits/stdc++.h>
using namespace std;

int n, m, k, answer;
int board[50][50];
int sticker[11][11];

// 스티커 회전 시키는 함수
void Rotate(int &r, int &c) {
    int tmp[11][11];
    for (int i = 0; i < r; i++) 
        for (int j = 0; j < c; j++) 
            tmp[j][r - 1 - i] = sticker[i][j];
        
    
    for (int i = 0; i < 11; ++i) 
        for (int j = 0; j < 11; ++j) 
            sticker[i][j] = tmp[i][j];
    
    swap(r, c);
}

// 붙어지는 지 확인하는 함수
bool CanStick(int x, int y, int r, int c) {
    for (int i = 0; i < r; i++) 
        for (int j = 0; j < c; j++) 
            if (board[x + i][y + j] && sticker[i][j]) return false;
    return true;
}

// 붙어지면 보드에 붙이는 함수
void Stick(int x, int y, int r, int c) {
    for (int i = 0; i < r; i++) 
        for (int j = 0; j < c; j++) 
            if (sticker[i][j]) board[x + i][y + j] = sticker[i][j];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;

    while(k--){
        int r, c;
        cin >> r >> c;
        
        for (int i = 0; i < 11; i++) fill(sticker[i],sticker[i] + 11, 0);
        for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) cin >> sticker[i][j];

        bool found = false;
        for (int rotate = 0; rotate < 4 && !found; rotate++) {
            for (int i = 0; i <= n - r && !found; i++) {
                for (int j = 0; j <= m - c && !found; j++) {
                    if (CanStick(i, j, r, c)) {
                        Stick(i,j,r,c);
                        found = true;
                    }
                }
            }
            if (!found) Rotate(r,c);
        }
    }
    
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            if(board[i][j]) answer++;

    cout << answer;
}